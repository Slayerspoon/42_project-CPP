/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 19:24:35 by aionescu          #+#    #+#             */
/*   Updated: 2022/08/17 19:59:25 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <time.h>
#include <cstdlib>

Base	*generate(void)
{
	int	choice = rand() % 3;
	Base	*retClass1 = new A;
	Base	*retClass2 = new B;
	Base	*retClass3 = new C;
	
	if (choice == 0)
	{
		std::cout << "Generated: A" << std::endl;
		delete (retClass2);
		delete (retClass3);
		return (retClass1);
	}
	else if (choice == 1)
	{
		std::cout << "Generated: B" << std::endl;
		delete (retClass1);
		delete (retClass3);
		return (retClass2);
	}
	else
	{
		std::cout << "Generated: C" << std::endl;
		delete (retClass1);
		delete (retClass2);
		return (retClass3);
	}
}

void	identify(Base* p)
{
	try
	{
		A*	aPtr = dynamic_cast<A*>(p);
		if (aPtr != nullptr)
			std::cout << "A" << std::endl;
	}
	catch (std::exception &e) {}
	try
	{
		B*	bPtr = dynamic_cast<B*>(p);
		if (bPtr != nullptr)
			std::cout << "B" << std::endl;
	}
	catch (std::exception &e) {}
	try
	{
		C*	cPtr = dynamic_cast<C*>(p);
		if (cPtr != nullptr)
			std::cout << "C" << std::endl;
	}
	catch (std::exception &e) {}
}

void	identify(Base& p)
{
	try
	{
		A&	aRef = dynamic_cast<A&>(p);
		if (&aRef != nullptr)
			std::cout << "A" << std::endl;
	}
	catch (std::exception &e) {}
	try
	{
		B&	bRef = dynamic_cast<B&>(p);
		if (&bRef != nullptr)
			std::cout << "B" << std::endl;
	}
	catch (std::exception &e) {}
	try
	{
		C&	cRef = dynamic_cast<C&>(p);
		if (&cRef != nullptr)
			std::cout << "C" << std::endl;
	}
	catch (std::exception &e) {}
}

int	main(void)
{
	srand(time(0));
	Base	*first = generate();
	Base	&firstRef = *first;
	Base	*second = generate();
	Base	&secondRef = *second;
	Base	*third = generate();
	Base	&thirdRef = *third;
	
	identify(first);
	identify(firstRef);
	identify(second);
	identify(secondRef);
	identify(third);
	identify(thirdRef);
	
	delete (first);
	delete (second);
	delete (third);
	
	return (0);
}
