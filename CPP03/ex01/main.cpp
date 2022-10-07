/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 18:16:36 by aionescu          #+#    #+#             */
/*   Updated: 2022/06/14 20:18:48 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap	defaultScavTrap = ScavTrap();
	std::cout << defaultScavTrap.getName() << " " << defaultScavTrap.getHitPoints() << " " << defaultScavTrap.getEnergyPoints() << " " << defaultScavTrap.getAttackDamage() << std::endl;
	std::cout << std::endl;
	
	ScavTrap	namedScavTrap = ScavTrap("Named ScavTrap");
	std::cout << namedScavTrap.getName() << " " << namedScavTrap.getHitPoints() << " " << namedScavTrap.getEnergyPoints() << " " << namedScavTrap.getAttackDamage() << std::endl;
	std::cout << std::endl;

	ScavTrap	copiedScavTrap(namedScavTrap);
	std::cout << copiedScavTrap.getName() << " " << copiedScavTrap.getHitPoints() << " " << copiedScavTrap.getEnergyPoints() << " " << copiedScavTrap.getAttackDamage() << std::endl;
	std::cout << std::endl;

	ScavTrap	assignedScavTrap;
	assignedScavTrap = namedScavTrap;
	std::cout << assignedScavTrap.getName() << " " << assignedScavTrap.getHitPoints() << " " << assignedScavTrap.getEnergyPoints() << " " << assignedScavTrap.getAttackDamage() << std::endl;
	std::cout << std::endl;
	
	defaultScavTrap.attack("victim");
	namedScavTrap.takeDamage(1);
	assignedScavTrap.beRepaired(1);
	assignedScavTrap.guardGate();
	
	return (0);
}
