/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 21:28:08 by aionescu          #+#    #+#             */
/*   Updated: 2022/04/04 20:31:20 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int, std::string);

int	main()
{
	Zombie	*zombies = NULL;
	int		n = 3;

	{	// Entering block
		zombies = zombieHorde(n, "Zeke");
		for (int i = 0; i < n; i++)
		{
			zombies[i].announce();
		}
	}	// Leaving block

	delete[] (zombies);
	return (0);
}
