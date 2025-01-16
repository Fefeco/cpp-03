/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 10:52:09 by fcarranz          #+#    #+#             */
/*   Updated: 2025/01/15 21:59:38 by fedeito          ###   ########.fr       */
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
    this->_name = other.getName();
    this->_hitPoints = other.getHitPoints();
    this->_energyPoints = other.getEnergyPoints();
    this->_attackDamage = other.getAttackDamage();
  }

  return *this;
}

/*
 * Getters
 */
std::string ClapTrap::getName(void) const { return this->_name; }

unsigned int ClapTrap::getHitPoints(void) const { return this->_hitPoints; }

unsigned int ClapTrap::getEnergyPoints(void) const {
  return this->_energyPoints;
}

unsigned int ClapTrap::getAttackDamage(void) const {
  return this->_attackDamage;
}

/*
 * Setter
 */
void ClapTrap::setAttackDamage(unsigned int points) {
  std::cout << "ClapTrap " << this->_name << " sets it's attack damage whit "
            << points << " points" << std::endl;
  this->_attackDamage = points;
}

/*
 * Mandatory member functions
 */
void ClapTrap::attack(const std::string &target) {

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

void ClapTrap::takeDamage(unsigned int amount) {

  if (!this->_hitPoints) {
    std::cout << "ClapTrap " << this->_name
              << " can't recive any damage. It's already dead!" << std::endl;
    return;
  }

  std::cout << "ClapTrap " << this->_name << " receives " << amount
            << " of damage." << std::endl;

  if (amount > this->_hitPoints)
    this->_hitPoints = 0;
  else
    this->_hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {

  if (!this->_energyPoints) {
    std::cout << "ClapTrap " << this->_name
              << " can't repair itself. No energy points left." << std::endl;
    return;
  }

  std::cout << "ClapTrap " << this->_name << " repaired " << amount
            << " hit points." << std::endl;

  this->_hitPoints += amount;
  --this->_energyPoints;
}
