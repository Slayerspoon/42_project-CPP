/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:54:06 by aionescu          #+#    #+#             */
/*   Updated: 2022/07/07 23:29:23 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP "PresidentialPardonForm.hpp"

# include <iostream>
# include <stdexcept>
# include <stdlib.h>
# include "Form.hpp"
# include "Bureaucrat.hpp"

class Bureaucrat;

class PresidentialPardonForm: public Form
{
	private:
		const std::string	target;
	
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string &newTarget);
		PresidentialPardonForm(const PresidentialPardonForm &original);
		~PresidentialPardonForm();
		
		void	executeFormSpecificAction() const;
};

#endif
