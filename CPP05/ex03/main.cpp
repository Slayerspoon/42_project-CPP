/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 22:04:08 by aionescu          #+#    #+#             */
/*   Updated: 2022/08/15 20:03:54 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Intern	someRandomIntern;
	Form*	scf = nullptr;
	Form*	rrf = nullptr;
	Form*	ppf = nullptr;
	Form*	invalid_form = nullptr;
	scf = someRandomIntern.makeForm("shrubbery creation", "Bender");
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	ppf = someRandomIntern.makeForm("presidential pardon", "Bender");
	try
	{
		invalid_form = someRandomIntern.makeForm("invalid form", "Bender");
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	delete (scf);
	delete (rrf);
	delete (ppf);
	delete (invalid_form);
	
	return (0);
}
