/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 18:16:36 by aionescu          #+#    #+#             */
/*   Updated: 2022/06/14 19:06:43 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	defaultClapTrap = ClapTrap();
	ClapTrap	namedClapTrap = ClapTrap("Named ClapTrap");
	ClapTrap	copiedClapTrap(namedClapTrap);
	ClapTrap	assignedClapTrap;
	assignedClapTrap = namedClapTrap;
	
	defaultClapTrap.attack("victim");
	defaultClapTrap.attack("victim");
	defaultClapTrap.attack("victim");
	defaultClapTrap.attack("victim");
	defaultClapTrap.attack("victim");
	defaultClapTrap.attack("victim");
	defaultClapTrap.attack("victim");
	defaultClapTrap.attack("victim");
	defaultClapTrap.attack("victim");
	defaultClapTrap.attack("victim");
	defaultClapTrap.attack("victim");
	namedClapTrap.takeDamage(1);
	namedClapTrap.takeDamage(10);
	namedClapTrap.takeDamage(100);
	assignedClapTrap.beRepaired(1);
	assignedClapTrap.beRepaired(UINT32_MAX);
	assignedClapTrap.beRepaired(1);
	
	return (0);
}
