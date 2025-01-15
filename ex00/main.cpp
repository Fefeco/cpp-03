/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fedeito <fcarranz@student.42barcel>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 17:58:35 by fedeito           #+#    #+#             */
/*   Updated: 2025/01/15 22:05:52 by fedeito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "ClapTrap.hpp"

int main(void) {
  ClapTrap ply1("Kent");
  ClapTrap ply2("John");

  std::cout << "Setting damage attack..." << std::endl;
  ply1.setAttackDamage(2);
  ply2.setAttackDamage(5);

  std::cout << "Attacking someone" << std::endl;
  ply1.attack("Some random guy");
  ply2.attack("the nearest ClapTrap");

  std::cout << "Receiving damage" << std::endl;
  for (int i = 0; i < 6; ++i) {
    ply1.takeDamage(2);
  }
  ply2.takeDamage(20);

  std::cout << "Repairing" << std::endl;
  for (int i = 0; i < 9; ++i) {
    ply2.beRepaired(1);
  }
  ply1.beRepaired(5);

  std::cout << "Try to atack" << std::endl;
  ply1.attack("Gondar");
  ply2.attack("Paul");

  std::cout << "Try to repair itself" << std::endl;
  ply2.beRepaired(1);
  return 0;
}
