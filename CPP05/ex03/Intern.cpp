/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 23:51:04 by aionescu          #+#    #+#             */
/*   Updated: 2022/07/08 00:42:07 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern constructed." << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern destroyed." << std::endl;
}

Form	*Intern::makeForm(const std::string &formName, const std::string &target)
{
	Form	*(Intern::*func[3])(const std::string &target) = {&Intern::makeSCF, &Intern::makeRRF, &Intern::makePPF};
	std::string	array_of_form_names[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	
	int	index = 0;
	while (index < 3)
	{
		if (formName == array_of_form_names[index])
			return ((this->*(func[index]))(target));
		index++;
	}
	std::cout << "Requested form name did not match any known forms!" << std::endl;
	throw Intern::FormNotFoundException();
}

Form	*Intern::makeSCF(const std::string &target)
{
	return (new ShrubberyCreationForm(target));
}

Form	*Intern::makeRRF(const std::string &target)
{
	return (new RobotomyRequestForm(target));
}

Form	*Intern::makePPF(const std::string &target)
{
	return (new PresidentialPardonForm(target));
}

const char	*Intern::FormNotFoundException::what() const throw()
{
	return ("Intern::FormNotFoundException: Requested form name did not match any known forms!");
}
