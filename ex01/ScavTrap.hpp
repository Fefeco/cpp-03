/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:12:57 by fcarranz          #+#    #+#             */
/*   Updated: 2025/01/21 13:04:02 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:
	ScavTrap(void);
	~ScavTrap(void);

	ScavTrap(std::string name);

	ScavTrap(const ScavTrap &other);
//	ScavTrap &operator=(const ScavTrap &other);

	void guardGate(void);

//private:
//  std::string _name;
//  unsigned int _hitPoints;
//  unsigned int _energyPoints;
//  unsigned int _attackDamage;
};
