/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 18:46:32 by aionescu          #+#    #+#             */
/*   Updated: 2022/06/23 21:46:25 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP "Dog.hpp"

# include <iostream>
# include "Animal.hpp"

class Dog: virtual public Animal
{
	private:
		Brain		*brain;

	public:
		Dog();
		Dog(std::string newType);
		Dog(const Dog &original);
		~Dog();
		
		Dog &operator=(const Dog &original);

		Brain	*getBrain(void) const;
		void	setBrain(Brain *newBrain);
		void	makeSound(void) const;
};

#endif
