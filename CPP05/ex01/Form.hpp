/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 23:31:25 by aionescu          #+#    #+#             */
/*   Updated: 2022/08/15 19:55:26 by aionescu         ###   ########.fr       */
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
	
	public:
		Form();
		Form(const std::string &newName, const unsigned int &newGrade_required_to_sign, const unsigned int &newGrade_required_to_execute);
		Form(const Form &original);
		~Form();
		Form &operator=(const Form &original);
		
		const std::string	&getName() const;
		const bool	&getIsSigned() const;
		const unsigned int	&getGradeRequiredToSign() const;
		const unsigned int	&getGradeRequiredToExecute() const;
		
		void	beSigned(const Bureaucrat &bureaucrat);
		
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
};

std::ostream &operator<<(std::ostream &output, const Form &form);

#endif
