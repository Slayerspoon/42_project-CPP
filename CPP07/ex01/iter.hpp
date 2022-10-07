/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 20:46:12 by aionescu          #+#    #+#             */
/*   Updated: 2022/07/21 21:17:50 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP "iter.hpp"

#include <iostream>

template <typename T>
void	iter(T arr[], unsigned long arr_length, void f(T &elem))
{
	unsigned long	index = 0;
	while (index < arr_length)
	{
		f(arr[index]);
		index++;
	}
}

template <typename T>
void	coutArg(T some_arg)
{
	std::cout << some_arg << std::endl;
}

#endif
