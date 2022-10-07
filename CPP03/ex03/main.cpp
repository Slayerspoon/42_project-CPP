/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 18:16:36 by aionescu          #+#    #+#             */
/*   Updated: 2022/06/15 21:56:11 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap	defaultDiamondTrap = DiamondTrap();
	std::cout << defaultDiamondTrap.getName() << " " << defaultDiamondTrap.getHitPoints() << " " << defaultDiamondTrap.getEnergyPoints() << " " << defaultDiamondTrap.getAttackDamage() << std::endl;
	std::cout << std::endl;
	
	DiamondTrap	namedDiamondTrap = DiamondTrap("Named DiamondTrap");
	std::cout << namedDiamondTrap.getName() << " " << namedDiamondTrap.getHitPoints() << " " << namedDiamondTrap.getEnergyPoints() << " " << namedDiamondTrap.getAttackDamage() << std::endl;
	std::cout << std::endl;

	DiamondTrap	copiedDiamondTrap(namedDiamondTrap);
	std::cout << copiedDiamondTrap.getName() << " " << copiedDiamondTrap.getHitPoints() << " " << copiedDiamondTrap.getEnergyPoints() << " " << copiedDiamondTrap.getAttackDamage() << std::endl;
	std::cout << std::endl;
	
	defaultDiamondTrap.attack("victim");
	namedDiamondTrap.takeDamage(1);
	copiedDiamondTrap.beRepaired(1);
	copiedDiamondTrap.guardGate();
	std::cout << std::endl;
	
	defaultDiamondTrap.whoAmI();
	namedDiamondTrap.whoAmI();
	copiedDiamondTrap.whoAmI();
	std::cout << std::endl;
	
	return (0);
}
