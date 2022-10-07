/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 21:35:25 by aionescu          #+#    #+#             */
/*   Updated: 2022/05/26 18:21:51 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP "Contact.hpp"

#include <string>

class Contact
{
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	phoneNumber;
		std::string	darkestSecret;
		int			uniqueID;

	public:
		Contact(std::string	firstName, std::string	lastName, std::string	nickName, std::string phoneNumber, std::string	darkestSecret, int uniqueID);
		Contact();

		void		setFirstName(std::string newFirstName);
		void		setLastName(std::string newLastName);
		void		setNickName(std::string newNickName);
		void		setPhoneNumber(std::string newPhoneNumber);
		void		setDarkestSecret(std::string newDarkestSecret);
		void		setUniqueID(int newUniqueID);

		std::string	getFirstName();
		std::string	getLastName();
		std::string	getNickName();
		std::string	getPhoneNumber();
		std::string	getDarkestSecret();
		int			getUniqueID();
};

#endif
