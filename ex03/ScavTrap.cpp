/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 10:40:25 by fcarranz          #+#    #+#             */
/*   Updated: 2025/02/19 11:48:24 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

/*
* Default values
 */
const std::string ScavTrap::_defName = "ScavTrap";
const unsigned int ScavTrap::_defHP = 100;
const unsigned int ScavTrap::_defEP = 50;
const unsigned int ScavTrap::_defAD = 20;

/*
* Constructors
 */
ScavTrap::ScavTrap(void)
  : ClapTrap(_defName, _defHP, _defEP, _defAD), guardGateMode(false)
{
  std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
  : ClapTrap(name, _defHP, _defEP, _defAD), guardGateMode(false)
{
  guardGateMode = false;
  std::cout << "ScavTrap constructor called for " << _name << std::endl;
}

ScavTrap::ScavTrap(std::string name, unsigned int hp, unsigned int ep, unsigned int ad)
  : ClapTrap(name, hp, ep, ad), guardGateMode(false)
{
  std::cout << "Constructor called for " << _name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other)
  : ClapTrap(other), guardGateMode(other.guardGateMode)
{
  std::cout << "ScavTrap copy constructor called" << std::endl;
}

/*
* Destructor
 */
ScavTrap::~ScavTrap(void) {
  std::cout << "ScavTrap destructor for " << _name << " called" << std::endl;
}

/*
* Assignment operator overload
 */
ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
  std::cout << "ScavTrap copy assignment operator called" << std::endl;

  if (this != &other) {
	ClapTrap::operator=(other);
    guardGateMode = other.guardGateMode;
  }

  return *this;
}

/*
* Member functions
 */
void ScavTrap::attack(const std::string &target) {

  if (!_energyPoints) {
    std::cout << "ScavTrap " << _name
              << " can't attack. No energy points left." << std::endl;
    return;
  }

  if (!_attackDamage) {
    std::cout << "ScavTrap " << _name
              << " can't attack nobody without attack damage points"
              << std::endl;
    return;
  }

  std::cout << "ScavTrap " << _name << " attacks " << target
            << ", causing " << _attackDamage << " points of damage!"
            << std::endl;

  --_energyPoints;
}

void ScavTrap::guardGate(void)
{
  if (guardGateMode)
	  std::cout << "ScavTrap " << _name << " already in Gate keeper mode" << std::endl;
  else
  {
    guardGateMode = true;
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode" << std::endl;
  }
}
