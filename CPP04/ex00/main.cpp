/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 18:41:29 by aionescu          #+#    #+#             */
/*   Updated: 2022/08/09 19:05:25 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	
	std::cout << std::endl;

	const WrongAnimal* wrongmeta = new WrongAnimal();
	const WrongAnimal* k = new WrongCat();
	std::cout << k->getType() << " " << std::endl;
	k->makeSound();
	wrongmeta->makeSound();
	
	delete (meta);
	delete (i);
	delete (j);
	delete (wrongmeta);
	delete (k);
	
	std::cout << std::endl;
	std::cout << "NOW BY DECLARING THE EXACT ANIMAL TYPE:" << std::endl;
	std::cout << std::endl;
	
	const Animal* animal = new Animal();
	const Dog* dog = new Dog();
	const Cat* cat = new Cat();
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	cat->makeSound();
	dog->makeSound();
	animal->makeSound();
	
	std::cout << std::endl;

	const WrongAnimal* wronganimal = new WrongAnimal();
	const WrongCat* wrongcat = new WrongCat();
	std::cout << wrongcat->getType() << " " << std::endl;
	wrongcat->makeSound();
	wronganimal->makeSound();
	
	delete (animal);
	delete (dog);
	delete (cat);
	delete (wronganimal);
	delete (wrongcat);
	
	return (0);
}
