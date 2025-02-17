/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 12:39:14 by fcarranz          #+#    #+#             */
/*   Updated: 2025/02/17 14:47:20 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

#include <string>
#include <iostream>

/*
* Constructors
 */
DiamondTrap::DiamondTrap(void) : ClapTrap("Default_clap_name") {
	std::cout << "DiamondTrap default constructor called." << std::endl;
	_hitPoints = FragTrap::_hitPoints;	
	_energyPoints = ScavTrap::_energyPoints;	
	_attackDamage = FragTrap::_attackDamage;	
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name") {
	std::cout << "DiamondTrapS constructor called." << std::endl;
	std::cout << "FragTrap hp: " << FragTrap::_hitPoints << std::endl;
	_hitPoints = FragTrap::_hitPoints;	
	_energyPoints = ScavTrap::_energyPoints;	
	_attackDamage = FragTrap::_attackDamage;	
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other) {
  std::cout << "DiamondTrap copy constructor called" << std::endl;
}

/*
* Destructor
 */
DiamondTrap::~DiamondTrap(void) {
  std::cout << "DiamondTrap destructor for " << _name << " called" << std::endl;
}

/*
* Assignment operator overload
 */
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) {
  std::cout << "DiamondTrap copy assignment operator called" << std::endl;

  if (this != &other) {
	ClapTrap::operator=(other);
  }

  return *this;
}

/*
* Member functions
 */
void DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}
