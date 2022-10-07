/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 18:16:36 by aionescu          #+#    #+#             */
/*   Updated: 2022/06/15 17:59:07 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap	defaultFragTrap = FragTrap();
	std::cout << defaultFragTrap.getName() << " " << defaultFragTrap.getHitPoints() << " " << defaultFragTrap.getEnergyPoints() << " " << defaultFragTrap.getAttackDamage() << std::endl;
	std::cout << std::endl;
	
	FragTrap	namedFragTrap = FragTrap("Named FragTrap");
	std::cout << namedFragTrap.getName() << " " << namedFragTrap.getHitPoints() << " " << namedFragTrap.getEnergyPoints() << " " << namedFragTrap.getAttackDamage() << std::endl;
	std::cout << std::endl;

	FragTrap	copiedFragTrap(namedFragTrap);
	std::cout << copiedFragTrap.getName() << " " << copiedFragTrap.getHitPoints() << " " << copiedFragTrap.getEnergyPoints() << " " << copiedFragTrap.getAttackDamage() << std::endl;
	std::cout << std::endl;

	FragTrap	assignedFragTrap;
	assignedFragTrap = namedFragTrap;
	std::cout << assignedFragTrap.getName() << " " << assignedFragTrap.getHitPoints() << " " << assignedFragTrap.getEnergyPoints() << " " << assignedFragTrap.getAttackDamage() << std::endl;
	std::cout << std::endl;
	
	defaultFragTrap.attack("victim");
	namedFragTrap.takeDamage(1);
	assignedFragTrap.beRepaired(1);
	assignedFragTrap.highFivesGuys();
	
	return (0);
}
