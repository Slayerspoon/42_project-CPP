/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 18:46:49 by aionescu          #+#    #+#             */
/*   Updated: 2022/08/09 19:06:57 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP "Cat.hpp"

# include <iostream>
# include "Animal.hpp"

class Cat: public Animal
{
	public:
		Cat();
		Cat(std::string newType);
		Cat(const Cat &original);
		~Cat();
		
		Cat &operator=(const Cat &original);

		void	makeSound(void) const;
};

#endif
