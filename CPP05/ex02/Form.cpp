/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 23:31:17 by aionescu          #+#    #+#             */
/*   Updated: 2022/07/07 22:30:17 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): name("Default Form Name"), grade_required_to_sign(150), grade_required_to_execute(150)
{
	this->is_signed = false;
	std::cout << "Default Form constructed." << std::endl;
}

Form::Form(const std::string &newName, const unsigned int &newGrade_required_to_sign, const unsigned int &newGrade_required_to_execute): name(newName), grade_required_to_sign(newGrade_required_to_sign), grade_required_to_execute(newGrade_required_to_execute)
{
	if (newGrade_required_to_sign < 1 || newGrade_required_to_execute < 1)
		throw Form::GradeTooHighException();
	else if (newGrade_required_to_sign > 150 || newGrade_required_to_execute > 150)
		throw Form::GradeTooLowException();
	this->is_signed = false;
	std::cout << "Parametrized Form named " << this->name << " constructed." << std::endl;
}

Form::Form(const Form &original): name(original.getName()), grade_required_to_sign(original.getGradeRequiredToSign()), grade_required_to_execute(original.getGradeRequiredToExecute())
{
	this->is_signed = original.getIsSigned();
	std::cout << "Copied Form named " << this->name << " constructed." << std::endl;
}

Form::~Form()
{
	std::cout << "Form named " << this->name << " destroyed." << std::endl;
}

Form	&Form::operator=(const Form &original)
{
	this->is_signed = original.getIsSigned();
	std::cout << "Variables \"name\", \"grade_required_to_sign\" and \"grade_required_to_execute\" are const and cannot be overwritten. Only variable \"is_signed\" was copied." << std::endl;
	return (*this);
}

std::ostream	&operator<<(std::ostream &output, const Form &form)
{
	output << form.getName() << ", signed status " << form.getIsSigned() << ", grade required to sign " << form.getGradeRequiredToSign() << ", grade required to execute " << form.getGradeRequiredToExecute();
	return (output);
}

const std::string	&Form::getName() const
{
	return (this->name);
}

const bool	&Form::getIsSigned() const
{
	return (this->is_signed);
}

const unsigned int	&Form::getGradeRequiredToSign() const
{
	return (this->grade_required_to_sign);
}

const unsigned int	&Form::getGradeRequiredToExecute() const
{
	return (this->grade_required_to_execute);
}

void	Form::beSigned(const Bureaucrat &bureaucrat)
{
	try
	{
		if (bureaucrat.getGrade() > this->grade_required_to_sign)
			throw Form::GradeTooLowException();
		this->is_signed = true;
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	Form::execute(Bureaucrat const &executor) const
{
	if (this->is_signed == false)
		throw Form::FormNotSignedException();
	else if (executor.getGrade() > this->grade_required_to_execute)
		throw Form::GradeTooLowException();
	else
		executeFormSpecificAction();
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("Form::GradeTooHighException: Grade is too high!");
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("Form::GradeTooLowException: Grade is too low!");
}

const char	*Form::FormNotSignedException::what() const throw()
{
	return ("Form::FormNotSignedException: Form is not signed!");
}
