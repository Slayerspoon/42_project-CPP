/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 18:25:02 by aionescu          #+#    #+#             */
/*   Updated: 2022/06/23 21:47:13 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP "DiamondTrap.hpp"

# include <iostream>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string	name;
	
	public:
		DiamondTrap();
		DiamondTrap(const std::string newName);
		DiamondTrap(const DiamondTrap &original);
		~DiamondTrap();
		
		std::string	getName() const;
		void	setName(const std::string newName);

		using ScavTrap::attack;
		void	whoAmI();
};

#endif
