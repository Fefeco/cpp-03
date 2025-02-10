/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 10:40:25 by fcarranz          #+#    #+#             */
/*   Updated: 2025/02/10 15:34:23 by fcarranz         ###   ########.fr       */
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

  if (!this->_energyPoints) {
    std::cout << "ClapTrap " << this->_name
              << " can't attack. No energy points left." << std::endl;
    return;
  }

  if (!this->_attackDamage) {
    std::cout << "ClapTrap " << this->_name
              << " can't attack nobody without attack damage points"
              << std::endl;
    return;
  }

  std::cout << "ClapTrap " << this->_name << " attacks " << target
            << ", causing " << this->_attackDamage << " points of damage!"
            << std::endl;

  --this->_energyPoints;
}
std::string	&ScavTrap::attack(std::string name)
{
}
