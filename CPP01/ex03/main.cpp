/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 21:07:26 by aionescu          #+#    #+#             */
/*   Updated: 2022/05/04 21:51:18 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon gun = Weapon("pistol");

		HumanA adam("Adam", gun);
		adam.attack();
		gun.setType("shotgun");
		adam.attack();
	}
	{
		Weapon gun = Weapon("pistol");

		HumanB bill("Bill");
		bill.setWeapon(gun);
		bill.attack();
		gun.setType("shotgun");
		bill.attack();
	}

	return (0);
}