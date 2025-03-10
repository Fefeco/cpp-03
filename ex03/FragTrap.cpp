/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 14:04:53 by fcarranz          #+#    #+#             */
/*   Updated: 2025/02/25 13:13:52 by fedeito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <cstdio>
#include <iostream>
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

/*
* Default values
 */
const std::string FragTrap::_defName = "FragTrap";
const unsigned int FragTrap::_defHP = 100;
const unsigned int FragTrap::_defEP = 100;
const unsigned int FragTrap::_defAD = 30;

/*
* Constructors
 */
FragTrap::FragTrap(void) : ClapTrap("FragTrap", _defHP, _defEP, _defAD)
{
  std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, _defHP, _defEP, _defAD)
{
  std::cout << "FragTrap constructor called for " << _name << std::endl;
}

FragTrap::FragTrap(std::string name, unsigned int hp, unsigned int ep, unsigned int ad)
  : ClapTrap(name, hp, ep, ad)
{
  std::cout << "FragTrap Constructor called for " << _name << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
  std::cout << "FragTrap copy constructor called" << std::endl;
}

/*
* Destructor
 */
FragTrap::~FragTrap(void)
{
  std::cout << "FragTrap destructor for " << _name << " called" << std::endl;
}

/*
* Assignment operator overload
 */
FragTrap &FragTrap::operator=(const FragTrap &other)
{
  std::cout << "FragTrap copy assignment operator called" << std::endl;

  if (this != &other) {
    ClapTrap::operator=(other);
  }

  return *this;
}

/*
* Mandatory member functions
 */
void FragTrap::attack(const std::string &target) {

  if (!_energyPoints) {
    std::cout << FragTrap::getClassName() << " " << _name
              << " can't attack. No energy points left." << std::endl;
    return;
  }

  if (!_attackDamage) {
    std::cout << FragTrap::getClassName() << " " << _name
              << " can't attack nobody without attack damage points"
              << std::endl;
    return;
  }

  std::cout << FragTrap::getClassName() << " " << _name << " attacks " << target
            << ", causing " << _attackDamage << " points of damage!"
            << std::endl;

  --_energyPoints;
}

void FragTrap::highFivesGuys(void)
{
  std::cout << "FragTrap " << _name
            << " rises its hand requesting a high fives" << std::endl
            << "PRESS ENTER TO HIGH FIVE" << std::endl;
  getchar();
  std::cout << "CLAP!" << std::endl;
}

/*
* Extra functions
 */
const std::string FragTrap::getClassName(void) const { return "FragTrap"; }
