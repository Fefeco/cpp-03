/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:16:52 by fcarranz          #+#    #+#             */
/*   Updated: 2025/02/21 13:43:48 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "colors.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

void printTestHeader(const std::string& message) {
	std::cout << GREEN << message << std::endl;
	for (unsigned long i = 0; i < message.length(); i++)
		std::cout << "=";
	std::cout << RST << std::endl;
}

void printSubtitle(const std::string& message) {
	std::cout << GREEN << message << RST << std::endl;
}

int main(void) {
	std::cout << std::endl;
	printTestHeader("Create DiamondTrap");
	DiamondTrap d1("Henry");
	DiamondTrap d2;

	std::cout << std::endl;
	printTestHeader("Create ScavTrap");
	ScavTrap s1;

    std::cout << std::endl;
    printTestHeader("Create FragTrap");
    FragTrap f1;

	std::cout << std::endl;
	printTestHeader("Test attack");
	d1.attack("Somebody");
	s1.attack("someone else");
	f1.attack("someone else");
	d1.setAttackDamage(33);
	s1.setAttackDamage(33);
	f1.setAttackDamage(33);
	//std::cout << std::endl;
	//printTestHeader("Print info before assignment operator call");
	//d1.getInfo();
	//std::cout << std::endl;
	//printTestHeader("Test high fives");
	
	std::cout << std::endl;
	printTestHeader("Class Name");
	d1.whoAmI();
	d2.whoAmI();
	std::cout << std::endl;
	return 0;
}
