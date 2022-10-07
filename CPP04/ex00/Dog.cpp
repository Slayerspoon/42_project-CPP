/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 18:46:21 by aionescu          #+#    #+#             */
/*   Updated: 2022/06/17 19:51:32 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Default Dog constructed." << std::endl;
}

Dog::Dog(std::string newType)
{
	this->type = newType;
	std::cout << "Parametrized Dog constructed." << std::endl;
}

Dog::Dog(const Dog &original)
{
	this->type = original.getType();
	std::cout << "Copied Dog constructed." << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog " << this->type << " destroyed." << std::endl;
}

Dog &Dog::operator=(const Dog &original)
{
	this->type = original.getType();
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "*Bark*" << std::endl;
}
