/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 21:20:31 by aionescu          #+#    #+#             */
/*   Updated: 2022/07/28 19:32:26 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int	main(void)
{
	int	*a = new int();
	Array<int> b(2);
	Array<int> c(2);
	
	std::cout << "a: " << *a << std::endl;
	std::cout << "b: " << b[0] << ", " << b[1] << std::endl;
	
	b[0] = 10;
	b[1] = 20;
	std::cout << "b: " << b[0] << ", " << b[1] << std::endl;
	
	b[0] = a[0];
	std::cout << "b: " << b[0] << ", " << b[1] << std::endl;
	
	b = c;
	std::cout << "b: " << b[0] << ", " << b[1] << std::endl;
	std::cout << "c: " << c[0] << ", " << c[1] << std::endl;
	
	Array<std::string> strs(2);
	
	strs[0] = "John";
	strs[1] = "Madden";
	std::cout << "strs: " << strs[0] << ", " << strs[1] << std::endl;
	
	Array<float> *d = new Array<float>(2);
	(*d)[0] = 30;
	(*d)[1] = 40;
	std::cout << "d: " << (*d)[0] << ", " << (*d)[1] << std::endl;
	
	Array<float> e(*d);
	std::cout << "e: " << e[0] << ", " << e[1] << std::endl;
	
	delete a;
	delete d;
	return (0);
}
