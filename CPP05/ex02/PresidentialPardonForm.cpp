/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:54:22 by aionescu          #+#    #+#             */
/*   Updated: 2022/07/07 23:35:08 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form()
{
	std::cout << "Default PresidentialPardonForm constructed." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &newTarget): Form("Presidential Pardon Form", 25, 5), target(newTarget)
{
	std::cout << "Parametrized PresidentialPardonForm named " << Form::getName() << " constructed." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &original): Form(original)
{
	std::cout << "Copied PresidentialPardonForm named " << Form::getName() << " constructed." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm named " << Form::getName() << " destroyed." << std::endl;
}

void	PresidentialPardonForm::executeFormSpecificAction() const
{
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
