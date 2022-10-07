/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 23:31:25 by aionescu          #+#    #+#             */
/*   Updated: 2022/08/15 20:00:42 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP "Form.hpp"

# include <iostream>
# include <stdexcept>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	name;
		bool				is_signed;
		const unsigned int	grade_required_to_sign;
		const unsigned int	grade_required_to_execute;
	
	protected:
		Form();
		Form(const std::string &newName, const unsigned int &newGrade_required_to_sign, const unsigned int &newGrade_required_to_execute);
		Form(const Form &original);
	
	public:
		virtual ~Form() = 0;
		Form &operator=(const Form &original);
		
		virtual const std::string	&getName() const;
		virtual const bool			&getIsSigned() const;
		virtual const unsigned int	&getGradeRequiredToSign() const;
		virtual const unsigned int	&getGradeRequiredToExecute() const;
		
		virtual void	beSigned(const Bureaucrat &bureaucrat);
		virtual void	execute(Bureaucrat const &executor) const;
		virtual void	executeFormSpecificAction() const = 0;
		
		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
		
		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
		
		class FormNotSignedException: public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
};

std::ostream &operator<<(std::ostream &output, const Form &form);

#endif
