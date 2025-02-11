/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 10:40:25 by fcarranz          #+#    #+#             */
/*   Updated: 2025/02/11 10:14:44 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

/*
* Constructors
 */
ScavTrap::ScavTrap(void) : ClapTrap::ClapTrap()
{
  std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
  std::cout << "ScavTrap constructor called for " << _name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other)
    : ClapTrap(other){
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
  }

  return *this;
}

/*
* Member functions
 */
void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode" << std::endl;
}

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
