/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 18:46:32 by aionescu          #+#    #+#             */
/*   Updated: 2022/06/23 21:46:41 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP "Dog.hpp"

# include <iostream>
# include "Animal.hpp"

class Dog: public Animal
{
	public:
		Dog();
		Dog(std::string newType);
		Dog(const Dog &original);
		~Dog();
		
		Dog &operator=(const Dog &original);

		void	makeSound(void) const;
};

#endif
