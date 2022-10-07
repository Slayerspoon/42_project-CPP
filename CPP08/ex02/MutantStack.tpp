/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 19:31:23 by aionescu          #+#    #+#             */
/*   Updated: 2022/08/18 21:13:15 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
MutantStack<T>::MutantStack()
{
	std::cout << "MutantStack constructor called." << std::endl;
}

template <typename T>
MutantStack<T>::MutantStack(MutantStack<T> &original)
{
	typename MutantStack<T>::iterator	iter = original.begin();

	while (iter != original.end())
	{
		this->push(*iter);
		iter++;
	}
	std::cout << "MutantStack copy constructor called." << std::endl;
}

template <typename T>
MutantStack<T>::~MutantStack()
{
	std::cout << "MutantStack destructor called." << std::endl;
}

template <typename T>
MutantStack<T>	&MutantStack<T>::operator=(MutantStack<T> &original)
{
	typename MutantStack<T>::iterator	iter = original.begin();

	while (iter != original.end())
	{
		this->push(*iter);
		iter++;
	}
	return (*this);
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin(void)
{
	return this->c.begin();
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end(void)
{
	return this->c.end();
}
