/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:52:28 by aionescu          #+#    #+#             */
/*   Updated: 2022/07/07 22:40:50 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP "ShrubberyCreationForm.hpp"

# include <iostream>
# include <stdexcept>
# include <fstream>
# include "Form.hpp"
# include "Bureaucrat.hpp"

class Bureaucrat;

class ShrubberyCreationForm: public Form
{
	private:
		const std::string	target;
	
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string &newTarget);
		ShrubberyCreationForm(const ShrubberyCreationForm &original);
		~ShrubberyCreationForm();
		
		void	executeFormSpecificAction() const;
};

#endif
