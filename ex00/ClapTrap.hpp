/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 10:52:21 by fcarranz          #+#    #+#             */
/*   Updated: 2025/01/14 13:11:21 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class ClapTrap {

public:
	ClapTrap(void);
	~ClapTrap(void);

	ClapTrap(std::string name);

	ClapTrap(const ClapTrap &other);
	ClapTrap &operator=(const ClapTrap &other);

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amout);

	std::string	getName(void);
	unsigned int getHitPoints(void);
	unsigned int getEnergyPoints(void);
	unsigned int getAttackDamage(void);

private:
	std::string	_name;
	unsigned int _hitPoints;
	unsigned int _energyPoints;
	unsigned int _attackDamage;

};
