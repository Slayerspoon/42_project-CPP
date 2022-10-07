/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 18:46:49 by aionescu          #+#    #+#             */
/*   Updated: 2022/06/23 21:46:16 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP "Cat.hpp"

# include <iostream>
# include "Animal.hpp"

class Cat: virtual public Animal
{
	private:
		Brain		*brain;

	public:
		Cat();
		Cat(std::string newType);
		Cat(const Cat &original);
		~Cat();
		
		Cat &operator=(const Cat &original);

		Brain	*getBrain(void) const;
		void	setBrain(Brain *newBrain);
		void	makeSound(void) const;
};

#endif
