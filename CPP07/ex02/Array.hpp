/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 21:21:16 by aionescu          #+#    #+#             */
/*   Updated: 2022/07/28 19:30:54 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP "Array.hpp"

# include <iostream>
# include <stdexcept>

template <typename T> class Array
{
	private:
		unsigned int	arraySize;
		T				*arrayData;
	
	public:
		Array();
		Array(const unsigned int &n);
		Array(Array &original);
		~Array();
		Array	&operator=(Array &original);
		
		unsigned int	size() const;
		T	&operator[](const unsigned int n);
		
		class ArrayIndexOutOfBoundsException: public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
};

# include "Array.tpp"

#endif
