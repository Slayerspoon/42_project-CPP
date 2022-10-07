/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 21:41:09 by aionescu          #+#    #+#             */
/*   Updated: 2022/08/15 21:15:15 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP "Span.hpp"

# include <iostream>
# include <stdexcept>
# include <vector>

class Span
{
	private:
		std::vector<int>	vec;
		unsigned int	N;
	
	public:
		Span();
		Span(const unsigned int &newN);
		Span(const Span &original);
		~Span();
		Span	&operator=(const Span &original);
		
		void	addNumber(int num);
		int	shortestSpan();
		int	longestSpan();
		void	addManyRandom(unsigned int how_many);
		void	addManyFromIterators(std::vector<int>::iterator start, std::vector<int>::iterator finish);
		void	listSpan(void);
		
		class SpanIteratorOutOfBoundsException: public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
		
		class NotEnoughElementsStoredException: public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
};

#endif
