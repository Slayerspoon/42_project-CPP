/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 21:18:11 by aionescu          #+#    #+#             */
/*   Updated: 2022/06/17 21:21:37 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "Default WrongCat constructed." << std::endl;
}

WrongCat::WrongCat(std::string newType)
{
	this->type = newType;
	std::cout << "Parametrized WrongCat constructed." << std::endl;
}

WrongCat::WrongCat(const WrongCat &original)
{
	this->type = original.getType();
	std::cout << "Copied WrongCat constructed." << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat " << this->type << " destroyed." << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &original)
{
	this->type = original.getType();
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "*WrongCat Meow*" << std::endl;
}
