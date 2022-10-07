/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 21:29:13 by aionescu          #+#    #+#             */
/*   Updated: 2022/04/04 20:11:05 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Constructed a zombie." << std::endl;
}

Zombie::Zombie(std::string newName)
{
	this->name = newName;
}

Zombie::~Zombie()
{
	std::cout << this->name << " just got destroyed." << std::endl;
}

void	Zombie::setName(std::string newName)
{
	this->name = newName;
}

void	Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
