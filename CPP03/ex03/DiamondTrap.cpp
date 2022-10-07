/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 18:25:17 by aionescu          #+#    #+#             */
/*   Updated: 2022/06/15 21:53:58 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ScavTrap(), FragTrap()
{
	this->setName("Default DiamondTrap name");
	this->ClapTrap::setName(this->getName() + "_clap_name");
	this->setEnergyPoints(50);
	std::cout << "DiamondTrap default constructor executed." << std::endl;
}

DiamondTrap::DiamondTrap(const std::string newName): ScavTrap(newName), FragTrap(newName)
{
	this->setName("Named DiamondTrap name");
	this->ClapTrap::setName(this->getName() + "_clap_name");
	this->setEnergyPoints(50);
	std::cout << "DiamondTrap named constructor executed." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &original)
{
	this->setName(original.getName());
	this->ClapTrap::setName(this->getName() + "_clap_name");
	this->setHitPoints(original.getHitPoints());
	this->setEnergyPoints(original.getEnergyPoints());
	this->setAttackDamage(original.getAttackDamage());
	std::cout << "DiamondTrap copy constructor executed." << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor executed." << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << this->getName() << std::endl;
	std::cout << this->ClapTrap::getName() << std::endl;
}

std::string	DiamondTrap::getName() const
{
	return (this->name);
}

void	DiamondTrap::setName(const std::string newName)
{
	this->name = newName;
}
