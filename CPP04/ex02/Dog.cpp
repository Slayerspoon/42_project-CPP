/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 18:46:21 by aionescu          #+#    #+#             */
/*   Updated: 2022/06/23 21:28:31 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Default Dog constructed." << std::endl;
}

Dog::Dog(std::string newType)
{
	this->type = newType;
	this->brain = new Brain();
	std::cout << "Parametrized Dog constructed." << std::endl;
}

Dog::Dog(const Dog &original)
{
	this->type = original.getType();
	for (int i = 0; i < 100; i++)
		this->brain->setIdea(i, original.getBrain()->getIdeas()[i]);
	std::cout << "Copied Dog constructed." << std::endl;
}

Dog::~Dog()
{
	delete(this->brain);
	std::cout << "Dog " << this->type << " destroyed." << std::endl;
}

Dog &Dog::operator=(const Dog &original)
{
	this->type = original.getType();
	for (int i = 0; i < 100; i++)
		this->brain->setIdea(i, original.getBrain()->getIdeas()[i]);
	return (*this);
}

std::string	Dog::getType(void) const
{
	return (this->type);
}

void	Dog::setType(const std::string newType)
{
	this->type = newType;
}

Brain	*Dog::getBrain(void) const
{
	return (this->brain);
}

void	Dog::setBrain(Brain *newBrain)
{
	this->brain = newBrain;
}

void	Dog::makeSound(void) const
{
	std::cout << "*Bark*" << std::endl;
}
