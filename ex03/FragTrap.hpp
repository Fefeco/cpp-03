/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 14:05:08 by fcarranz          #+#    #+#             */
/*   Updated: 2025/02/19 14:16:47 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

public:
  FragTrap(void);
  FragTrap(std::string name);
  FragTrap(const FragTrap &other);
  FragTrap(std::string name, unsigned int hp, unsigned int ep, unsigned int ad);

  FragTrap &operator=(const FragTrap &other);

  ~FragTrap(void);

  void highFivesGuys(void);
  void getInfo(void);
  const std::string getClassName(void) const;

protected:
  static const std::string _defName;
  static const std::string _className;
  static const unsigned int _defHP;
  static const unsigned int _defEP;
  static const unsigned int _defAD;
};
