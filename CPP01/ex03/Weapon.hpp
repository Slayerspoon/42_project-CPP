/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 21:07:49 by aionescu          #+#    #+#             */
/*   Updated: 2022/04/05 22:58:27 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP "Weapon.hpp"

#include <iostream>
#include <string>

class Weapon
{
	private:
		std::string	type;

	public:
		Weapon(std::string newType);
		~Weapon();

		const std::string&	getType() const;
		void				setType(const std::string& newType);
};

#endif
