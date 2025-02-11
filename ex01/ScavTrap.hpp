/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:12:57 by fcarranz          #+#    #+#             */
/*   Updated: 2025/02/11 12:39:38 by fcarranz         ###   ########.fr       */
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
	ScavTrap &operator=(const ScavTrap &other);

	void guardGate(void);
	void attack(const std::string& target);
};
