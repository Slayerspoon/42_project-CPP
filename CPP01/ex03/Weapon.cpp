/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 21:07:58 by aionescu          #+#    #+#             */
/*   Updated: 2022/05/27 21:29:56 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string newType)
{
	this->type = newType;
	std::cout << "Weapon of type " << type << " constructed." << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Weapon of type " << type << " destroyed." << std::endl;
}

const std::string&	Weapon::getType() const
{
	return (this->type);
}

void				Weapon::setType(const std::string& newType)
{
	std::cout << "Setting " << this->type << " to " << newType << std::endl;
	this->type = newType;
	std::cout << "Type " << this->type << " set." << std::endl;
}
