/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 18:41:29 by aionescu          #+#    #+#             */
/*   Updated: 2022/08/09 19:17:15 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	const Animal *animals[2];
	std::cout << "Array declared." << std::endl;
	std::cout << std::endl;
	
	animals[0] = new Dog("Corgi");
	animals[1] = new Cat("Maine Coon");
	std::cout << "Array elements initialized." << std::endl;
	std::cout << std::endl;
	
	animals[0]->makeSound();
	animals[0]->getBrain()->setIdea(0, "Sausage");
	std::cout << animals[0]->getType() << " ideas: " << animals[0]->getBrain()->getIdeas()[0] << std::endl;
	animals[1]->makeSound();
	animals[1]->getBrain()->setIdea(0, "Fish");
	std::cout << animals[1]->getType() << " ideas: " << animals[1]->getBrain()->getIdeas()[0] << std::endl;
	std::cout << "Array elements called." << std::endl;
	std::cout << std::endl;
	
	for (int i = 0; i < 2; i++)
		delete(animals[i]);
	std::cout << "Array elements deleted." << std::endl;
	std::cout << std::endl;
	
	return (0);
}
