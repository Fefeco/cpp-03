/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:16:52 by fcarranz          #+#    #+#             */
/*   Updated: 2025/02/25 13:11:31 by fedeito          ###   ########.fr       */
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
	s1.setAttackDamage(53);
	f1.setAttackDamage(13);
	s1.attack("someone else");
	f1.attack("someone else");

	std::cout << std::endl;
	printTestHeader("Test whoAmI");
	d1.whoAmI();
	d2.whoAmI();

	std::cout << std::endl;
	printTestHeader("Print info before assignment operator call");
	d1.getInfo();
	d1 = d2;
	d1.whoAmI();
	d2.whoAmI();

	std::cout << std::endl;
	printTestHeader("Test high fives");
	f1.highFivesGuys();
	
	std::cout << std::endl;
    printTestHeader("Destructors");
	return 0;
}
