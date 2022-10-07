/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 18:46:49 by aionescu          #+#    #+#             */
/*   Updated: 2022/06/23 21:29:46 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP "Cat.hpp"

# include <iostream>
# include "Animal.hpp"

class Cat: public Animal
{
	private:
		Brain		*brain;

	protected:
		std::string	type;

	public:
		Cat();
		Cat(std::string newType);
		Cat(const Cat &original);
		~Cat();
		
		Cat &operator=(const Cat &original);

		std::string	getType(void) const;
		void		setType(const std::string newType);
		Brain	*getBrain(void) const;
		void	setBrain(Brain *newBrain);
		void	makeSound(void) const;
};

#endif
