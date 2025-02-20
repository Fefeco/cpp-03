/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 12:39:14 by fcarranz          #+#    #+#             */
/*   Updated: 2025/02/20 21:15:35 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

/*
* Default values
 */
const std::string DiamondTrap::_defName = "NoNameDiamond";
const unsigned int DiamondTrap::_defHP = FragTrap::_defHP;
const unsigned int DiamondTrap::_defEP = ScavTrap::_defEP;
const unsigned int DiamondTrap::_defAD = FragTrap::_defAD;

/*
* Constructors
 */
DiamondTrap::DiamondTrap(void)
  : ClapTrap(_defName + "_clap_name", _defHP, _defEP, _defAD), _name(_defName)
{
  std::cout << "DiamondTrap default constructor called." << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
  : ClapTrap(name + "_clap_name", _defHP, _defEP, _defAD), _name(name)
{
  std::cout << "DiamondTrap constructor called." << std::endl;
}

DiamondTrap::DiamondTrap(std::string name, unsigned int hp,
                         unsigned int ep, unsigned int ad)
  : ClapTrap(name, hp, ep, ad)
{
  std::cout << "DiamondTrap Constructor called for " << _name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
  : ClapTrap(other), ScavTrap(other), FragTrap(other)
{
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
* Mandatory member functions
 */

const std::string DiamondTrap::getClassName(void) const
{
	return FragTrap::getClassName();
}

void DiamondTrap::whoAmI(void)
{
  std::cout << "My name is " << ClapTrap::_name
	        << " but you can call me " << _name
	        << std::endl;
}
