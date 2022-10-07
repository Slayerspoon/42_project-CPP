/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 21:44:14 by aionescu          #+#    #+#             */
/*   Updated: 2022/04/03 22:01:47 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP "Zombie.hpp"

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string	name;

	public:
		Zombie(std::string newName);
		~Zombie();

		void		announce();
};

#endif
