/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 18:46:11 by aionescu          #+#    #+#             */
/*   Updated: 2022/06/23 21:34:01 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP "Animal.hpp"

# include <iostream>
# include "Brain.hpp"

class Animal
{
	protected:
		std::string	type;
		Animal();
		Animal(std::string newType);
		Animal(const Animal &original);

	public:
		virtual ~Animal() = 0;
		
		Animal &operator=(const Animal &original);
		
		virtual std::string	getType(void) const = 0;
		virtual void		setType(const std::string newType) = 0;
		virtual Brain	*getBrain(void) const = 0;
		virtual void	setBrain(Brain *newBrain) = 0;

		virtual void	makeSound(void) const = 0;
};

#endif
