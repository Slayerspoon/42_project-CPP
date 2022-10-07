/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:53:09 by aionescu          #+#    #+#             */
/*   Updated: 2022/07/07 22:50:49 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP "RobotomyRequestForm.hpp"

# include <iostream>
# include <stdexcept>
# include <stdlib.h>
# include "Form.hpp"
# include "Bureaucrat.hpp"

class Bureaucrat;

class RobotomyRequestForm: public Form
{
	private:
		const std::string	target;
	
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string &newTarget);
		RobotomyRequestForm(const RobotomyRequestForm &original);
		~RobotomyRequestForm();
		
		void	executeFormSpecificAction() const;
};

#endif
