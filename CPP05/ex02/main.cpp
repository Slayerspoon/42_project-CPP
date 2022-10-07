/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 22:04:08 by aionescu          #+#    #+#             */
/*   Updated: 2022/07/07 23:36:03 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	Bureaucrat	b1("Alfred", 138);
	Form	*scf1 = new ShrubberyCreationForm("Patch");
	std::cout << *scf1 << std::endl;
	
	b1.executeForm(*scf1);
	b1.signForm(*scf1);
	b1.executeForm(*scf1);
	b1.incrementGrade();
	b1.executeForm(*scf1);
	
	std::cout << std::endl;

	Bureaucrat	b2("Betty", 1);
	Form	*rrf1 = new RobotomyRequestForm("Patient");
	std::cout << *rrf1 << std::endl;
	
	b2.signForm(*rrf1);
	b2.executeForm(*rrf1);
	
	std::cout << std::endl;
	
	Form	*ppf1 = new PresidentialPardonForm("Simpleton");
	std::cout << *ppf1 << std::endl;
	
	b2.signForm(*ppf1);
	b2.executeForm(*ppf1);
	
	delete (scf1);
	delete (rrf1);
	delete (ppf1);
	
	return (0);
}
