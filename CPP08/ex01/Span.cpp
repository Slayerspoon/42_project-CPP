/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 21:40:59 by aionescu          #+#    #+#             */
/*   Updated: 2022/08/15 21:20:03 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	this->N = 0;
	std::cout << "Default Span constructed." << std::endl;
}

Span::Span(const unsigned int &newN)
{
	this->N = newN;
	std::cout << "Parametrized Span constructed." << std::endl;
}

Span::Span(const Span &original)
{
	this->vec = original.vec;
	this->N = original.N;
	std::cout << "Copy Span constructed." << std::endl;
}

Span::~Span()
{
	this->vec.clear();
	std::cout << "Span destroyed." << std::endl;
}

Span	&Span::operator=(const Span &original)
{
	this->vec = original.vec;
	this->N = original.N;
	return (*this);
}

void	Span::addNumber(int num)
{
	if (this->vec.size() < this->N)
		this->vec.push_back(num);
	else
		throw Span::SpanIteratorOutOfBoundsException();
}

int	Span::shortestSpan()
{
	if (this->vec.size() > 1)
	{
		int							min_span = INT32_MAX;
		std::vector<int>::iterator	first_iter = this->vec.begin();
		std::vector<int>::iterator	second_iter = this->vec.begin() + 1;
		while (first_iter != this->vec.end())
		{
			while (second_iter != this->vec.end())
			{
				if (first_iter != second_iter && *first_iter >= *second_iter && *first_iter - *second_iter < min_span)
				{
					min_span = *first_iter - *second_iter;
				}
				second_iter++;
			}
			second_iter = this->vec.begin();
			first_iter++;
		}
		return (min_span);
	}
	else
		throw Span::SpanIteratorOutOfBoundsException();
}

int	Span::longestSpan()
{
	if (this->vec.size() > 1)
	{
		int	min_elem = *(std::min_element(this->vec.begin(), this->vec.end()));
		int	max_elem = *(std::max_element(this->vec.begin(), this->vec.end()));
		return (max_elem - min_elem);
	}
	else
		throw Span::NotEnoughElementsStoredException();
}

void	Span::addManyRandom(unsigned int howMany)
{
	srand(time(NULL));
	while (howMany > 0)
	{
		try
		{
			addNumber(rand() % 10000);
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		howMany--;
	}
}

void	Span::addManyFromIterators(std::vector<int>::iterator start, std::vector<int>::iterator finish)
{
	std::vector<int>::iterator iter_temp = start;
	while (iter_temp != finish)
	{
		try
		{
			addNumber(*iter_temp);
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		iter_temp++;
	}
}

void	Span::listSpan(void)
{
	std::vector<int>::iterator	iter = this->vec.begin();
	std::cout << "SPAN START..." << std::endl;
	while (iter != this->vec.end())
	{
		std::cout << *iter << std::endl;
		iter++;
	}
	std::cout << "...SPAN END" << std::endl;
}

const char *Span::SpanIteratorOutOfBoundsException::what() const throw()
{
	return ("Span::SpanIteratorOutOfBoundsException: Span iterator out of bounds!");
}

const char *Span::NotEnoughElementsStoredException::what() const throw()
{
	return ("Span::NotEnoughElementsStoredException: Span has less than 2 elements stored!");
}
