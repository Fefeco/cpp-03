/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 10:52:09 by fcarranz          #+#    #+#             */
/*   Updated: 2025/02/12 18:43:42 by fedeito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#include <iostream>

/*
* Constructors
 */
ClapTrap::ClapTrap(void)
    : _name("Unnamed"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
  std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
    : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
  std::cout << "Constructor called for " << _name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
    : _name(other.getName()), _hitPoints(other.getHitPoints()),
      _energyPoints(other.getEnergyPoints()),
      _attackDamage(other.getAttackDamage()) {
  std::cout << "Copy constructor called" << std::endl;
}


/*
* Destructor
 */
ClapTrap::~ClapTrap(void) {
  std::cout << "Destructor for " << _name << " called" << std::endl;
}


/*
* Assignment operator overload
 */
ClapTrap &ClapTrap::operator=(const ClapTrap &other) {

  std::cout << "Copy assignment operator called" << std::endl;

  if (this != &other) {
    _name = other.getName();
    _hitPoints = other.getHitPoints();
    _energyPoints = other.getEnergyPoints();
    _attackDamage = other.getAttackDamage();
  }

  return *this;
}


/*
* Getters
 */
std::string ClapTrap::getName(void) const { return _name; }

unsigned int ClapTrap::getHitPoints(void) const { return _hitPoints; }

unsigned int ClapTrap::getEnergyPoints(void) const {
  return _energyPoints;
}

unsigned int ClapTrap::getAttackDamage(void) const {
  return _attackDamage;
}


/*
* Setter
 */
void ClapTrap::setAttackDamage(unsigned int points) {
  std::cout << "ClapTrap " << _name << " sets it's attack damage whit "
            << points << " points" << std::endl;
  _attackDamage = points;
}


/*
* Mandatory member functions
 */
void ClapTrap::attack(const std::string &target) {

  if (!_energyPoints) {
    std::cout << "ClapTrap " << _name
              << " can't attack. No energy points left." << std::endl;
    return;
  }

  if (!_attackDamage) {
    std::cout << "ClapTrap " << _name
              << " can't attack nobody without attack damage points"
              << std::endl;
    return;
  }

  std::cout << "ClapTrap " << _name << " attacks " << target
            << ", causing " << _attackDamage << " points of damage!"
            << std::endl;

  --_energyPoints;
}

void ClapTrap::takeDamage(unsigned int amount) {

  if (!_hitPoints) {
    std::cout << "ClapTrap " << _name
              << " can't recive any damage. It's already dead!" << std::endl;
    return;
  }

  std::cout << "ClapTrap " << _name << " receives " << amount
            << " of damage." << std::endl;

  if (amount > _hitPoints)
    _hitPoints = 0;
  else
    _hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {

  if (!_energyPoints) {
    std::cout << "ClapTrap " << _name
              << " can't repair itself. No energy points left." << std::endl;
    return;
  }

  std::cout << "ClapTrap " << _name << " repaired " << amount
            << " hit points." << std::endl;

  _hitPoints += amount;
  --_energyPoints;
}
