/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myAwesomePhonebook.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 20:06:49 by aionescu          #+#    #+#             */
/*   Updated: 2022/04/02 22:00:13 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	std::string	input;
	PhoneBook	phoneBook;

	std::cout << "Welcome to your Awesome Phonebook!" << std::endl;
	do
	{
		std::cout << "Enter one of these 3 commands: 'ADD', 'SEARCH' or 'EXIT'..." << std::endl;
		std::cin >> input;
		std::cout << std::endl;
		if (input.compare("ADD") == 0)
		{
			phoneBook.addContact();
		}
		else if (input.compare("SEARCH") == 0)
		{
			phoneBook.displayAllContacts();
		}
	} while (input.compare("EXIT") != 0);
	return (0);
}
