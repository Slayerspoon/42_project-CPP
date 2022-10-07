/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 19:50:57 by aionescu          #+#    #+#             */
/*   Updated: 2022/08/15 21:32:44 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int	main(void)
{
	Span sp = Span(15);
	// sp.addNumber(6);
	// sp.addNumber(3);
	// sp.addNumber(17);
	// sp.addNumber(9);
	// sp.addNumber(11);
	sp.addManyRandom(10);
	
	std::vector<int> int_vec;
	int_vec.push_back(666);
	int_vec.push_back(555);
	int_vec.push_back(444);
	sp.addManyFromIterators(int_vec.begin(), int_vec.end());
	
	sp.listSpan();
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	
	return 0;
}
