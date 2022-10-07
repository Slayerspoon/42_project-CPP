/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 18:46:11 by aionescu          #+#    #+#             */
/*   Updated: 2022/08/09 19:20:07 by aionescu         ###   ########.fr       */
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

	public:
		Animal();
		Animal(std::string newType);
		Animal(const Animal &original);
		virtual ~Animal() = 0;
		
		Animal &operator=(const Animal &original);
		
		std::string	getType(void) const;
		void		setType(const std::string newType);
		virtual Brain	*getBrain(void) const = 0;
		virtual void	setBrain(Brain *newBrain) = 0;

		virtual void	makeSound(void) const;
};

#endif
