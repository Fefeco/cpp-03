/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 10:40:25 by fcarranz          #+#    #+#             */
/*   Updated: 2025/01/21 13:35:20 by fcarranz         ###   ########.fr       */
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
ScavTrap &ScavTrap::operator=(const ScavTrap &other): ClapTrap = other {

  std::cout << "Copy assignment operator called" << std::endl;

  if (this != &other) {
    this->_name = other.getName();
    this->_hitPoints = other.getHitPoints();
    this->_energyPoints = other.getEnergyPoints();
    this->_attackDamage = other.getAttackDamage();
  }

  return *this;
}
