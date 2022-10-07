/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 18:46:42 by aionescu          #+#    #+#             */
/*   Updated: 2022/06/22 17:58:30 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Default Cat constructed." << std::endl;
}

Cat::Cat(std::string newType)
{
	this->type = newType;
	this->brain = new Brain();
	std::cout << "Parametrized Cat constructed." << std::endl;
}

Cat::Cat(const Cat &original)
{
	this->type = original.getType();
	for (int i = 0; i < 100; i++)
		this->brain->setIdea(i, original.getBrain()->getIdeas()[i]);
	std::cout << "Copied Cat constructed." << std::endl;
}

Cat::~Cat()
{
	delete(this->brain);
	std::cout << "Cat " << this->type << " destroyed." << std::endl;
}

Cat &Cat::operator=(const Cat &original)
{
	this->type = original.getType();
	for (int i = 0; i < 100; i++)
		this->brain->setIdea(i, original.getBrain()->getIdeas()[i]);
	return (*this);
}

Brain	*Cat::getBrain(void) const
{
	return (this->brain);
}

void	Cat::setBrain(Brain *newBrain)
{
	this->brain = newBrain;
}

void	Cat::makeSound(void) const
{
	std::cout << "*Meow*" << std::endl;
}
