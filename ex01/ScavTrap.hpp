/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:12:57 by fcarranz          #+#    #+#             */
/*   Updated: 2025/02/19 11:29:46 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

public:
  ScavTrap(void);
  ScavTrap(std::string name);
  ScavTrap(const ScavTrap &other);
  ScavTrap(std::string name, unsigned int hp, unsigned int ep, unsigned int ad);

  ScavTrap &operator=(const ScavTrap &other);

  ~ScavTrap(void);

  void attack(const std::string& target);
  void guardGate(void);

protected:
  static const std::string _defName;
  static const unsigned int _defHP;
  static const unsigned int _defEP;
  static const unsigned int _defAD;

private:
  bool guardGateMode;
};
