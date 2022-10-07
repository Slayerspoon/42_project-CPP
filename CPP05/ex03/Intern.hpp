/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 23:51:14 by aionescu          #+#    #+#             */
/*   Updated: 2022/07/08 00:34:17 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP "Intern.hpp"

# include <iostream>
# include <stdexcept>
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Form;

class Intern
{
	public:
		Intern();
		~Intern();
		
		Form	*makeForm(const std::string &formName, const std::string &target);
		Form	*makeSCF(const std::string &target);
		Form	*makeRRF(const std::string &target);
		Form	*makePPF(const std::string &target);
		
		class FormNotFoundException: public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
};

#endif
