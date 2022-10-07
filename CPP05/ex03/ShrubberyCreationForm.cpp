/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:52:45 by aionescu          #+#    #+#             */
/*   Updated: 2022/07/07 22:40:33 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form()
{
	std::cout << "Default ShrubberyCreationForm constructed." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &newTarget): Form("Shrubbery Creation Form", 145, 137), target(newTarget)
{
	std::cout << "Parametrized ShrubberyCreationForm named " << Form::getName() << " constructed." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &original): Form(original)
{
	std::cout << "Copied ShrubberyCreationForm named " << Form::getName() << " constructed." << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm named " << Form::getName() << " destroyed." << std::endl;
}

void	ShrubberyCreationForm::executeFormSpecificAction() const
{
	std::ofstream	outfile(this->target + "_shrubbery");
	outfile <<
"       _-_        " << std::endl <<
"    /~~   ~~\\    " << std::endl <<
" /~~         ~~\\ " << std::endl <<
"{               } " << std::endl <<
" \\  _-     -_  / " << std::endl <<
"   ~  \\\\ //  ~  " << std::endl <<
"_- -   | | _- _   " << std::endl <<
"  _ -  | |   -_   " << std::endl <<
"      // \\\\     "
	;
	outfile.close();
}
