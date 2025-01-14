/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 10:52:09 by fcarranz          #+#    #+#             */
/*   Updated: 2025/01/14 13:18:33 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#include <stdio>

ClapTrap::ClapTrap(void)
	: _name("Unnamed"), _hitPoints(10), _energyPionts(10), _attackDamage(0)
{
	std::cout << "Default constructor called for "
	   		  << _name
			  << " ClapTrap"
			  << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	: _name(name), _hitPoints(10), _energyPionts(10), _attackDamage(0)
{
	std::cout << "Default constructor called for "
			  << _name
			  << " ClapTrap"
			  << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor for "
			  << this->_name
			  << " called"
			  << std::endl;
}

std::string ClapTrap::getName(void) {
	return this->_name;
}

unsigned int ClapTrap::getHitPoints(void) {
	return this->_hitPoints;
}

unsigned int ClapTrap::getEnergyPoints(void) {
	return this->_energyPoints;
}

unsigned int ClapTrap::getAttackDamage(void) {
	return this->_attackDamage;
}

ClapTrap::ClapTrap(const ClapTrap &other)
	: _name(other.getName()),
	  _hitPoints(other.getHitPoints()),
	  _energyPoints(other.getEnergyPoints()),
	  _attackDamage(other.getAttackDamage())
{
	std::cout << "Copy constructor called" << std::endl;	
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
	if (this != &other) {
	this->_name = other.getName();
	this->_hitPoints = other.getHitPoints();
	this->_energyPoints = other.getEnergyPoints();
	this->_attackDamage = other.getAttackDamage();
	}
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}
