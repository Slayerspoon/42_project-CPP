/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 22:16:22 by aionescu          #+#    #+#             */
/*   Updated: 2022/05/26 19:17:42 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	Contact contacts[8];
}

std::string	PhoneBook::truncate(std::string str, unsigned long displayLength)
{
	if (str.length() <= displayLength)
	{
		return (str);
	}
	else
	{
		str.resize(displayLength - 1);
		return (str + ".");
	}
}

void	PhoneBook::addContact()
{
	int		index = 0;
	int		newestID = 0;
	int		oldestID = 2147483647;
	bool	firstEver = true;

	while (index < 8)
	{
		if (contacts[index].getFirstName().empty())
		{
			newestID = index;
			break;
		}
		index++;
		firstEver = false;
	}
	if (index == 8)
	{
		index = 0;
		while (index < 8)
		{
			if (newestID <= contacts[index].getUniqueID())
				newestID = contacts[index].getUniqueID();
			if (oldestID >= contacts[index].getUniqueID())
				oldestID = contacts[index].getUniqueID();
			index++;
		}
		index = 0;
		while (index < 8)
		{
			if (oldestID == contacts[index].getUniqueID())
				break;
			index++;
		}
	}
	std::cout << "Phonebook entry number " << index + 1 << ":" << std::endl;
	for (int i = 1; i <= 5; i++)
	{
		std::string	input;

		do
		{
			switch (i)
			{
				case 1:
				{
					std::cout << "Enter contact first name: " << std::endl;
					break;
				}
				case 2:
				{
					std::cout << "Enter contact last name: " << std::endl;
					break;
				}
				case 3:
				{
					std::cout << "Enter contact nickname: " << std::endl;
					break;
				}
				case 4:
				{
					std::cout << "Enter contact phone number: " << std::endl;
					break;
				}
				default:
					std::cout << "Enter contact darkest secret: " << std::endl;
			}
			std::cin >> input;
			std::cout << std::endl;
		} while (input.empty());
		switch (i)
		{
			case 1:
			{
				contacts[index].setFirstName(input);
				break;
			}
			case 2:
			{
				contacts[index].setLastName(input);
				break;
			}
			case 3:
			{
				contacts[index].setNickName(input);
				break;
			}
			case 4:
			{
				contacts[index].setPhoneNumber(input);
				break;
			}
			default:
				contacts[index].setDarkestSecret(input);
		}
	}
	if (firstEver)
		contacts[index].setUniqueID(0);
	else
		contacts[index].setUniqueID(newestID + 1);
}

void	PhoneBook::displayOneContact(int entryNo)
{
	if (1 <= entryNo && entryNo <= 8)
	{
		std::cout << "Contact entry number " << entryNo << ":" << std::endl;
		std::cout << contacts[entryNo - 1].getFirstName() << std::endl;
		std::cout << contacts[entryNo - 1].getLastName() << std::endl;
		std::cout << contacts[entryNo - 1].getNickName() << std::endl;
		std::cout << contacts[entryNo - 1].getPhoneNumber() << std::endl;
		std::cout << contacts[entryNo - 1].getDarkestSecret() << std::endl;
	}
}

void	PhoneBook::displayAllContacts()
{
	std::cout << "Listing all Phonebook entries:" << std::endl;
	std::cout << std::right << std::setw(10) << "Entry no." << "|"
								<< std::setw(10) << "First name" << "|"
								<< std::setw(10) << "Last name" << "|"
								<< std::setw(10) << "Nickname" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << std::right << std::setw(10) << i + 1 << "|"
								<< std::setw(10) << PhoneBook::truncate(contacts[i].getFirstName(), 10) << "|"
								<< std::setw(10) << PhoneBook::truncate(contacts[i].getLastName(), 10) << "|"
								<< std::setw(10) << PhoneBook::truncate(contacts[i].getNickName(), 10) << std::endl;
	}
	std::cout << std::endl;
	
	int		input = 10;
	bool	validInput = true;
	do
	{
		std::cout << "Enter contact entry number for details:" << std::endl;
		std::cin >> input;
		std::cout << std::endl;
		if (input < 1 || 8 < input)
		{
			validInput = false;
		}
		else
		{
			validInput = true;
		}
	} while (validInput == false);
	PhoneBook::displayOneContact(input);
}
