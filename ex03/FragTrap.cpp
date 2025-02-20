/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 14:04:53 by fcarranz          #+#    #+#             */
/*   Updated: 2025/02/19 13:59:51 by fcarranz         ###   ########.fr       */
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
const std::string FragTrap::_className = "FragTrap ";
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
void FragTrap::getInfo(void) {
  std::cout << "FragTrap: " << _name << std::endl
            << "Hit points: " << _hitPoints << std::endl
            << "Energy points: " << _energyPoints << std::endl
            << "Attack damage: " << _attackDamage << std::endl;
}

const std::string FragTrap::getClassName(void) const { return _className; }
