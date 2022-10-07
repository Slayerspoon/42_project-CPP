/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 19:54:34 by aionescu          #+#    #+#             */
/*   Updated: 2022/07/28 19:30:46 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
Array<T>::Array()
{
	this->arraySize = 0;
	this->arrayData = nullptr;
	std::cout << "Default Array constructor called." << std::endl;
}

template <typename T>
Array<T>::Array(const unsigned int &n)
{
	this->arraySize = n;
	this->arrayData = new T[n];
	std::cout << "Parametrized Array constructor called." << std::endl;
}

template <typename T>
Array<T>::Array(Array &original)
{
	unsigned int	index = 0;

	this->arraySize = original.size();
	this->arrayData = new T[original.size()];
	while (index < this->arraySize)
	{
		this->arrayData[index] = original[index];
		index++;
	}
	std::cout << "Parametrized Array constructor called." << std::endl;
}

template <typename T>
Array<T>::~Array()
{
	delete[] this->arrayData;
	std::cout << "Default Array destructor called." << std::endl;
}

template <typename T>
Array<T>	&Array<T>::operator=(Array &original)
{
	unsigned int	index = 0;

	this->arraySize = original.size();
	while (index < this->arraySize)
	{
		this->arrayData[index] = original[index];
		index++;
	}
	return (*this);
}

template <typename T>
unsigned int	Array<T>::size() const
{
	return (this->arraySize);
}

template <typename T>
T	&Array<T>::operator[](const unsigned int n)
{
	if (0 <= n && n < this->arraySize)
		return (this->arrayData[n]);
	else
		throw Array::ArrayIndexOutOfBoundsException();
}

template <typename T>
const char	*Array<T>::ArrayIndexOutOfBoundsException::what() const throw()
{
	return ("Array::ArrayIndexOutOfBoundsException: Index out of bounds!");
}
