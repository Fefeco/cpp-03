/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:16:52 by fcarranz          #+#    #+#             */
/*   Updated: 2025/02/10 15:31:36 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
	ScavTrap ply1("Robot");
	ScavTrap ply2(ply1);

	std::cout << "Ply1 Energy: " << ply1.getEnergyPoints() << std::endl;
	ScavTrap ply3;
	ply3 = ply2;
	std::cout << std::endl;
	std::cout << "Ply3.name: " << ply3.getName() << std::endl;
	ply3.attack(ply2.getName());
	ply3.guardGate();
	return 0;
}
