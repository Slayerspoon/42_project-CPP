/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 23:14:25 by aionescu          #+#    #+#             */
/*   Updated: 2022/06/22 17:58:17 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructed." << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destroyed." << std::endl;
}

std::string	*Brain::getIdeas(void)
{
	return (this->ideas);
}

void	Brain::setIdea(unsigned int ideaIndex, std::string newIdea)
{
	this->ideas[ideaIndex] = newIdea;
}
