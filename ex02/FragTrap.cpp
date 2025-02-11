/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 14:04:53 by fcarranz          #+#    #+#             */
/*   Updated: 2025/02/11 14:24:19 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

/*
* Constructors
 */
FragTrap::FragTrap(void) : ClapTrap::ClapTrap()
{
	_name = "FragTrap";
  std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string &name) : ClapTrap(name)
{
  std::cout << "FragTrap constructor called for " << _name << std::endl;
}

FragTrap::FragTrap(const FragTrap &other)
    : ClapTrap(other){
  std::cout << "FragTrap copy constructor called" << std::endl;
}

/*
* Destructor
 */
FragTrap::~FragTrap(void) {
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

