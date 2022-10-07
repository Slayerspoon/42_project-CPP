/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 19:14:49 by aionescu          #+#    #+#             */
/*   Updated: 2022/06/15 17:53:30 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "ScavTrap default constructor executed." << std::endl;
}

ScavTrap::ScavTrap(const std::string newName): ClapTrap(newName)
{
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "ScavTrap named constructor executed." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &original): ClapTrap(original)
{
	std::cout << "ScavTrap copy constructor executed." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor executed." << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->getEnergyPoints() > 0 && this->getHitPoints() > 0)
	{
		std::cout << "ScavTrap " << this->getName() << " attacks " << target << " and deals " << this->getAttackDamage() << " damage." << std::endl;
		this->setEnergyPoints(this->getEnergyPoints() - 1);
	}
	else
		std::cout << "ScavTrap " << this->getName() << " cannot attack." << std::endl;
}

void	ScavTrap::guardGate()
{
	if (this->getEnergyPoints() > 0 && this->getHitPoints() > 0)
	{
		std::cout << this->getName() << " is now in Gate keeper mode." << std::endl;
		this->setEnergyPoints(this->getEnergyPoints() - 1);
	}
	else
		std::cout << this->getName() << " cannot enter Gate keeper mode." << std::endl;
}
