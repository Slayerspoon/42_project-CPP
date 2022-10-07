/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 20:14:44 by aionescu          #+#    #+#             */
/*   Updated: 2022/07/20 19:23:27 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

typedef struct	Data
{
	unsigned int	rawData;
}				Data;

uintptr_t	serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int	main(void)
{
	Data	SomeData;
	
	SomeData.rawData = 1234567890;
	uintptr_t	uintPtr = serialize(&SomeData);
	Data		*dataPtr = deserialize(uintPtr);
	
	std::cout << "Value at original address: " << SomeData.rawData << std::endl;
	std::cout << "Original address: " << &SomeData << std::endl;
	std::cout << "Serialized address: " << uintPtr << std::endl;
	std::cout << "Deserialized serialized address: " << dataPtr << std::endl;
	std::cout << "Value at deserialized serialized address: " << dataPtr->rawData << std::endl;
	
	return (0);
}
