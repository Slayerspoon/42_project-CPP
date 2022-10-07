/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 21:18:49 by aionescu          #+#    #+#             */
/*   Updated: 2022/06/17 21:22:58 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP "WrongAnimal.hpp"

# include <iostream>

class WrongAnimal
{
	protected:
		std::string	type;

	public:
		WrongAnimal();
		WrongAnimal(std::string newType);
		WrongAnimal(const WrongAnimal &original);
		~WrongAnimal();
		
		WrongAnimal &operator=(const WrongAnimal &original);
		
		std::string	getType(void) const;
		void		setType(const std::string newType);

		void	makeSound(void) const;
};

#endif
