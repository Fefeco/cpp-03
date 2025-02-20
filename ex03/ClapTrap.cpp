/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 10:52:09 by fcarranz          #+#    #+#             */
/*   Updated: 2025/02/19 14:08:32 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

/*
* Default values
 */
const std::string ClapTrap::_defName = "ClapTrapNoName";
const unsigned int ClapTrap::_defHP = 10;
const unsigned int ClapTrap::_defEP = 10;
const unsigned int ClapTrap::_defAD = 0;

/*
* Constructors
 */
ClapTrap::ClapTrap(void)
  : _name(_defName), _hitPoints(_defHP), _energyPoints(_defEP), _attackDamage(_defAD) {
  std::cout << getClassName() << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
  : _name(name), _hitPoints(_defHP), _energyPoints(_defEP), _attackDamage(_defAD) {
  std::cout << getClassName() << "Constructor called for " << _name << std::endl;
}

ClapTrap::ClapTrap(std::string name, unsigned int hp, unsigned int ep, unsigned int ad)
  : _name(name), _hitPoints(hp), _energyPoints(ep), _attackDamage(ad)
{
  std::cout << getClassName() << "Constructor called for " << _name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
  : _name(other.getName()), _hitPoints(other.getHitPoints()),
  _energyPoints(other.getEnergyPoints()),
  _attackDamage(other.getAttackDamage()) {
  std::cout << getClassName() << "Copy constructor called" << std::endl;
}

/*
* Destructor
 */
ClapTrap::~ClapTrap(void) {
  std::cout << getClassName() << "Destructor for " << _name << " called" << std::endl;
}

/*
* Assignment operator overload
 */
ClapTrap &ClapTrap::operator=(const ClapTrap &other) {

  std::cout << getClassName() << "Copy assignment operator called" << std::endl;

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

const std::string ClapTrap::getClassName(void) const { return "ClapTrap "; }

unsigned int ClapTrap::getHitPoints(void) const { return _hitPoints; }

unsigned int ClapTrap::getEnergyPoints(void) const { return _energyPoints; }

unsigned int ClapTrap::getAttackDamage(void) const { return _attackDamage; }

/*
* Setter
 */
void ClapTrap::setAttackDamage(unsigned int points) {
  std::cout << getClassName() << _name << " sets it's attack damage whit "
            << points << " points" << std::endl;
  _attackDamage = points;
}

/*
* Mandatory member functions
 */
void ClapTrap::attack(const std::string &target) {

  if (!_energyPoints) {
    std::cout << getClassName() << _name
              << " can't attack. No energy points left." << std::endl;
    return;
  }

  if (!_attackDamage) {
    std::cout << getClassName() << _name
              << " can't attack nobody without attack damage points"
              << std::endl;
    return;
  }

  std::cout << getClassName() << _name << " attacks " << target
            << ", causing " << _attackDamage << " points of damage!"
            << std::endl;

  --_energyPoints;
}

void ClapTrap::takeDamage(unsigned int amount) {

  if (!_hitPoints) {
    std::cout << getClassName() << _name
              << " can't recive any damage. It's already dead!" << std::endl;
    return;
  }

  std::cout << getClassName() << _name << " receives " << amount
            << " of damage." << std::endl;

  if (amount > _hitPoints)
    _hitPoints = 0;
  else
    _hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {

  if (!_energyPoints) {
    std::cout << getClassName() << _name
              << " can't repair itself. No energy points left." << std::endl;
    return;
  }

  std::cout << getClassName() << _name << " repaired " << amount
            << " hit points." << std::endl;

  _hitPoints += amount;
  --_energyPoints;
}
