/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 21:28:08 by aionescu          #+#    #+#             */
/*   Updated: 2022/05/27 20:33:22 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string);
void	randomChump(std::string);

int	main()
{
	Zombie*	zombie2;
	{	// Entering block
		Zombie*	zombie1 = newZombie("Alfred");
		zombie1->announce();
		randomChump("Beethoven");
		std::cout << "Did Beethoven get destroyed?" << std::endl;
		zombie2 = newZombie("Gamling");
		zombie2->announce();
		delete(zombie1);
	}	// Leaving block
	delete(zombie2);
	std::cout << "Did Gamling get destroyed?" << std::endl;
	return (0);
}
