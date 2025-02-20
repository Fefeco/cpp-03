/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 12:26:11 by fcarranz          #+#    #+#             */
/*   Updated: 2025/02/20 21:02:08 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
public:
  DiamondTrap(void);
  DiamondTrap(std::string name);
  DiamondTrap(const DiamondTrap &other);
  DiamondTrap(std::string name, unsigned int hp, unsigned int ep, unsigned int ad);

  DiamondTrap &operator=(const DiamondTrap &other);

  ~DiamondTrap(void);

  void whoAmI(void);
  const std::string getClassName(void) const;

private:
  std::string _name;

protected:
  static const std::string _defName;
  static const std::string _className;
  static const unsigned int _defHP;
  static const unsigned int _defEP;
  static const unsigned int _defAD;
};
