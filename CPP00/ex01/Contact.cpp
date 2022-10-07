/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 21:34:50 by aionescu          #+#    #+#             */
/*   Updated: 2022/05/26 18:23:14 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret, int uniqueID)
{
	setFirstName(firstName);
	setLastName(lastName);
	setNickName(nickName);
	setPhoneNumber(phoneNumber);
	setDarkestSecret(darkestSecret);
	setUniqueID(uniqueID);
}

Contact::Contact(){}

void		Contact::setFirstName(std::string newFirstName)
{
	this->firstName = newFirstName;
}

void		Contact::setLastName(std::string newLastName)
{
	this->lastName = newLastName;
}

void		Contact::setNickName(std::string newNickName)
{
	this->nickName = newNickName;
}

void		Contact::setPhoneNumber(std::string newPhoneNumber)
{
	this->phoneNumber = newPhoneNumber;
}

void		Contact::setDarkestSecret(std::string newDarkestSecret)
{
	this->darkestSecret = newDarkestSecret;
}

void		Contact::setUniqueID(int newUniqueID)
{
	this->uniqueID = newUniqueID;
}

std::string	Contact::getFirstName()
{
	return (this->firstName);
}

std::string	Contact::getLastName()
{
	return (this->lastName);
}

std::string	Contact::getNickName()
{
	return (this->nickName);
}

std::string	Contact::getPhoneNumber()
{
	return (this->phoneNumber);
}

std::string	Contact::getDarkestSecret()
{
	return (this->darkestSecret);
}

int	Contact::getUniqueID()
{
	return (this->uniqueID);
}
