/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 22:16:18 by aionescu          #+#    #+#             */
/*   Updated: 2022/04/02 21:47:44 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP "PhoneBook.hpp"

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

class PhoneBook
{
	private:
		Contact		contacts[8];
		std::string	truncate(std::string str, unsigned long displayLength);
	public:
		PhoneBook();

		void	addContact();
		void	displayOneContact(int entryNo);
		void	displayAllContacts();
};

#endif
