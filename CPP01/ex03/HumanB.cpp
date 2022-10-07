/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 21:08:44 by aionescu          #+#    #+#             */
/*   Updated: 2022/05/27 21:42:39 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string newName)//: name(newName), weapon(nullptr)
{
	this->name = newName;
	this->weapon = nullptr;
	// std::cout << "HumanB " << name << " armed with a " << weapon->getType() << " constructed." << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "HumanA " << this->name << " destroyed." << std::endl;
}

void	HumanB::setWeapon(Weapon& newWeapon)
{
	this->weapon = &newWeapon;
}

Weapon&	HumanB::getWeapon() const
{
	return (*(this->weapon));
}

void	HumanB::attack() const
{
	if (this->weapon != nullptr)
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " cannot attack because they don't have a weapon." << std::endl;
}
