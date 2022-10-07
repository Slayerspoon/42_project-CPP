/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 19:14:49 by aionescu          #+#    #+#             */
/*   Updated: 2022/06/15 17:55:32 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << "FragTrap default constructor executed." << std::endl;
}

FragTrap::FragTrap(const std::string newName): ClapTrap(newName)
{
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << "FragTrap named constructor executed." << std::endl;
}

FragTrap::FragTrap(const FragTrap &original): ClapTrap(original)
{
	std::cout << "FragTrap copy constructor executed." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor executed." << std::endl;
}

void	FragTrap::attack(const std::string &target)
{
	if (this->getEnergyPoints() > 0 && this->getHitPoints() > 0)
	{
		std::cout << "FragTrap " << this->getName() << " attacks " << target << " and deals " << this->getAttackDamage() << " damage." << std::endl;
		this->setEnergyPoints(this->getEnergyPoints() - 1);
	}
	else
		std::cout << "FragTrap " << this->getName() << " cannot attack." << std::endl;
}

void	FragTrap::highFivesGuys()
{
	if (this->getEnergyPoints() > 0 && this->getHitPoints() > 0)
	{
		std::cout << this->getName() << " is requesting high-fives." << std::endl;
		this->setEnergyPoints(this->getEnergyPoints() - 1);
	}
	else
		std::cout << this->getName() << " cannot high-five anyone." << std::endl;
}
