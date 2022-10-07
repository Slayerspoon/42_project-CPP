/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 20:45:27 by aionescu          #+#    #+#             */
/*   Updated: 2022/07/21 21:18:12 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

void	incrementInt(int &some_int)
{
	some_int++;
}

int	main(void)
{
	int	arr_int[3] = {10, 20, 30};
	::iter(arr_int, 3, coutArg);
	::iter(arr_int, 3, incrementInt);
	::iter(arr_int, 3, coutArg);
	
	std::string	arr_str[3] = {"first", "second", "third"};
	::iter(arr_str, 3, coutArg);
	
	return (0);
}
