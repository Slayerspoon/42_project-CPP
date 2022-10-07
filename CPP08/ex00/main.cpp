/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 21:13:07 by aionescu          #+#    #+#             */
/*   Updated: 2022/08/15 21:32:57 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <array>
#include <vector>

int	main()
{
	std::vector<int>	vec;
	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);
	std::vector<int>::iterator	result1;
	result1 = ::easyfind(vec, 20);
	std::cout << "Found value: " << *result1 << std::endl;
	
	std::array<int, 1>::iterator	result2;
	std::array<int, 3>	arr = {11, 22, 33};
	try
	{
		result2 = ::easyfind(arr, 20);	
		std::cout << "Found value: " << result2 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "EXCEPTION: " << e.what() << std::endl;
	}
	result2 = ::easyfind(arr, 22);
	std::cout << "Found value: " << *result2 << std::endl;
	
	return (0);
}
