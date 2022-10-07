/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 22:04:17 by aionescu          #+#    #+#             */
/*   Updated: 2022/08/15 19:51:43 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("Default Bureaucrat"), grade(150)
{
	std::cout << "Default Bureaucrat named " << this->name << " with grade " << this->grade << " constructed." << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &newName, const unsigned int &newGrade): name(newName), grade(newGrade)
{
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << "Parametrized Bureaucrat named " << this->name << " with grade " << this->grade << " constructed." << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &original): name(original.getName()), grade(original.getGrade())
{
	std::cout << "Copied Bureaucrat named " << this->name << " with grade " << this->grade << " constructed." << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat named " << this->name << " with grade " << this->grade << " destroyed." << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &original)
{
	this->grade = original.getGrade();
	std::cout << "Variable \"name\" is const and cannot be overwritten. Only variable \"grade\" was copied." << std::endl;
	return (*this);
}

std::ostream	&operator<<(std::ostream &output, const Bureaucrat &bureaucrat)
{
	output << bureaucrat.getName() << ", grade " << bureaucrat.getGrade();
	return (output);
}

const std::string	&Bureaucrat::getName() const
{
	return (this->name);
}

const unsigned int	&Bureaucrat::getGrade() const
{
	return (this->grade);
}

void	Bureaucrat::incrementGrade()
{
	if (this->grade > 1)
		this->grade--;
	else
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::decrementGrade()
{
	if (this->grade < 150)
		this->grade++;
	else
		throw Bureaucrat::GradeTooLowException();
}
