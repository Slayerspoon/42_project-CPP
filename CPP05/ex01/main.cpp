/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 22:04:08 by aionescu          #+#    #+#             */
/*   Updated: 2022/08/15 19:58:39 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	Bureaucrat	b1("Alfred", 11);
	
	Form	f1;
	
	Form	*f2 = nullptr;
	try
	{
		f2 = new Form("Too high Form", 0, 10); // Should throw exception
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	delete f2;
	
	Form	*f3 = nullptr;
	try
	{
		f3 = new Form("Too low Form", 10, 1000); // Should throw exception
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	delete f3;
	
	Form	f4("Shitty Form", 10, 5);
	
	b1.signForm(f4); // Should throw exception
	
	b1.incrementGrade();
	b1.signForm(f4);
	
	return (0);
}
