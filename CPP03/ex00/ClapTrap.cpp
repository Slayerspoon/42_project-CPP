/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 18:16:56 by aionescu          #+#    #+#             */
/*   Updated: 2022/06/14 20:13:46 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Constructors and Destructors..................................................................

ClapTrap::ClapTrap()
{
	this->name = "Default ClapTrap Name";
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 10;
	std::cout << this->name << " constructed via default constructor." << std::endl;
}

ClapTrap::ClapTrap(const std::string newName)
{
	this->name = newName;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 10;
	std::cout << this->name << " constructed." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &original)
{
	this->setName(original.getName());
	this->setHitPoints(original.getHitPoints());
	this->setEnergyPoints(original.getEnergyPoints());
	this->setAttackDamage(original.getAttackDamage());
	std::cout << this->name << " copied from " << original.getName() << "." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << this->name << " destroyed." << std::endl;
}

// Operator overloads............................................................................

ClapTrap &ClapTrap::operator=(const ClapTrap &original)
{
	this->name = original.getName() + " Copy";
	this->hitPoints = original.getHitPoints();
	this->energyPoints = original.getEnergyPoints();
	this->attackDamage = original.getAttackDamage();
	std::cout << this->name << " assigned from " << original.getName() << "." << std::endl;
	return (*this);
}

// Getters and Setters...........................................................................

std::string	ClapTrap::getName(void) const
{
	return (this->name);
}

unsigned int	ClapTrap::getHitPoints(void) const
{
	return (this->hitPoints);
}

unsigned int	ClapTrap::getEnergyPoints(void) const
{
	return (this->energyPoints);
}

unsigned int	ClapTrap::getAttackDamage(void) const
{
	return (this->attackDamage);
}

void	ClapTrap::setName(const std::string newName)
{
	this->name = newName;
}

void	ClapTrap::setHitPoints(const unsigned int newHitPoints)
{
	this->hitPoints = newHitPoints;
}

void	ClapTrap::setEnergyPoints(const unsigned int newEnergyPoints)
{
	this->energyPoints = newEnergyPoints;
}

void	ClapTrap::setAttackDamage(const unsigned int newAttackDamage)
{
	this->attackDamage = newAttackDamage;
}

// Member functions..............................................................................

void	ClapTrap::attack(const std::string &target)
{
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		std::cout << this->name << " attacks " << target << " and deals " << this->attackDamage << " damage." << std::endl;
		this->energyPoints--;
	}
	else
		std::cout << this->name << " cannot attack." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints == 0)
		std::cout << this->name << " is attacked while already dead." << std::endl;
	else if (this->hitPoints >= amount)
	{
		std::cout << this->name << " is attacked and takes " << amount << " damage." << std::endl;
		this->hitPoints = this->hitPoints - amount;
	}
	else
	{
		std::cout << this->name << " is attacked and takes " << amount << " damage." << std::endl;
		this->hitPoints = 0;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		if (UINT32_MAX - this->hitPoints >= amount)
		{
			std::cout << this->name << " repairs itself for " << amount << " hit points." << std::endl;
			this->hitPoints = this->hitPoints + amount;
		}
		else
		{
			std::cout << this->name << " repairs itself for " << UINT32_MAX - this->hitPoints << " hit points and reaches the maximum." << std::endl;
			this->hitPoints = UINT32_MAX;
		}
		this->energyPoints--;
	}
	else
		std::cout << this->name << " cannot repair itself." << std::endl;
}
