/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 22:04:25 by aionescu          #+#    #+#             */
/*   Updated: 2022/08/15 20:00:13 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP "Bureaucrat.hpp"

# include <iostream>
# include <stdexcept>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string	name;
		unsigned int		grade;

	public:
		Bureaucrat();
		Bureaucrat(const std::string &newName, const unsigned int &newGrade);
		Bureaucrat(const Bureaucrat &original);
		~Bureaucrat();
		Bureaucrat	&operator=(const Bureaucrat &original);
		
		const std::string	&getName() const;
		const unsigned int	&getGrade() const;
		
		void	incrementGrade();
		void	decrementGrade();
		
		void	signForm(Form &form);
		void	executeForm(Form const & form);
		
		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char	*what() const throw()
				{
					return ("Bureaucrat::GradeTooHighException: Bureaucrat grade is too high!");
				}
		};
		
		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char	*what() const throw()
				{
					return ("Bureaucrat::GradeTooLowException: Bureaucrat grade is too low!");
				}
		};
};

std::ostream	&operator<<(std::ostream &output, const Bureaucrat &bureaucrat);

#endif
