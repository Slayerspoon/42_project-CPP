/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 22:04:08 by aionescu          #+#    #+#             */
/*   Updated: 2022/07/06 23:30:27 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	std::cout << "----- One big try-block -----" << std::endl;
	std::cout << std::endl;
	try
	{
		Bureaucrat	b1;
		Bureaucrat	b2("Alfred", 25);
		Bureaucrat	b3(b1);
		Bureaucrat	b4 = b2;
		Bureaucrat	b5("Betty", 200);
		
		b1.decrementGrade();
		b2.incrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout << "EXCEPTION: " << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	std::cout << "----- Small, dedicated try-blocks -----" << std::endl;
	std::cout << std::endl;

	Bureaucrat	b1;
	Bureaucrat	b2("Alfred", 25);
	Bureaucrat	b3(b1);
	Bureaucrat	b4 = b2;
	try
	{
		Bureaucrat	b5("Betty", 200);
	}
	catch (std::exception &e)
	{
		std::cout << "EXCEPTION: " << e.what() << std::endl;
	}
	
	try
	{
		b1.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cout << "EXCEPTION: " << e.what() << std::endl;
	}
	
	b2.incrementGrade();
	std::cout << "Instruction b2.incrementGrade() succeeded: " << b2 << std::endl;
	
	return (0);
}
