/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 18:46:42 by aionescu          #+#    #+#             */
/*   Updated: 2022/06/17 19:51:45 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Default Cat constructed." << std::endl;
}

Cat::Cat(std::string newType)
{
	this->type = newType;
	std::cout << "Parametrized Cat constructed." << std::endl;
}

Cat::Cat(const Cat &original)
{
	this->type = original.getType();
	std::cout << "Copied Cat constructed." << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat " << this->type << " destroyed." << std::endl;
}

Cat &Cat::operator=(const Cat &original)
{
	this->type = original.getType();
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "*Meow*" << std::endl;
}
