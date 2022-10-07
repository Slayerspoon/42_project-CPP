/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 21:18:52 by aionescu          #+#    #+#             */
/*   Updated: 2022/06/17 21:19:49 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "Default WrongAnimal type";
	std::cout << "Default WrongAnimal constructed." << std::endl;
}

WrongAnimal::WrongAnimal(std::string newType)
{
	this->type = newType;
	std::cout << "Parametrized WrongAnimal constructed." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &original)
{
	this->type = original.getType();
	std::cout << "Copied WrongAnimal constructed." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal " << this->type << " destroyed." << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &original)
{
	this->type = original.getType();
	return (*this);
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}

void	WrongAnimal::setType(const std::string newType)
{
	this->type = newType;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "*WrongAnimal sounds*" << std::endl;
}
