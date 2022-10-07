/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 21:08:12 by aionescu          #+#    #+#             */
/*   Updated: 2022/04/05 23:08:41 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string newName, Weapon& newWeapon): name(newName), weapon(newWeapon)
{
	// this->name = newName;
	// this->weapon = newWeapon;
	std::cout << "HumanA " << name << " armed with a " << weapon.getType() << " constructed." << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "HumanA " << this->name << " destroyed." << std::endl;
}

void	HumanA::attack() const
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}

Weapon&	HumanA::getWeapon() const
{
	return (this->weapon);
}
