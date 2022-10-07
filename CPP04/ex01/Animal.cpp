/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 18:45:57 by aionescu          #+#    #+#             */
/*   Updated: 2022/06/22 18:27:05 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->type = "Default Animal type";
	std::cout << "Default Animal constructed." << std::endl;
}

Animal::Animal(std::string newType)
{
	this->type = newType;
	std::cout << "Parametrized Animal constructed." << std::endl;
}

Animal::Animal(const Animal &original)
{
	this->type = original.getType();
	std::cout << "Copied Animal constructed." << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal " << this->type << " destroyed." << std::endl;
}

Animal &Animal::operator=(const Animal &original)
{
	this->type = original.getType();
	std::cout << "Animal " << this->type << " assigned." << std::endl;
	return (*this);
}

std::string	Animal::getType(void) const
{
	return (this->type);
}

void	Animal::setType(const std::string newType)
{
	this->type = newType;
}

void	Animal::makeSound(void) const
{
	std::cout << "*Animal sounds*" << std::endl;
}
