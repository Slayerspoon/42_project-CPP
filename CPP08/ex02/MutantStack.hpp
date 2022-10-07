/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 19:31:10 by aionescu          #+#    #+#             */
/*   Updated: 2022/08/18 21:16:41 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP "MutantStack.hpp"

# include <iostream>
# include <stack>

template <typename T> class	MutantStack: public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		
		MutantStack<T>();
		MutantStack<T>(MutantStack<T> &original);
		~MutantStack<T>();
		MutantStack	&operator=(MutantStack<T> &original);
		
		iterator	begin(void);
		iterator	end(void);
};

# include "MutantStack.tpp"

#endif
