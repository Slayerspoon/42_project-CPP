/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:53:26 by aionescu          #+#    #+#             */
/*   Updated: 2022/07/07 23:26:58 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form()
{
	std::cout << "Default RobotomyRequestForm constructed." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &newTarget): Form("Robotomy Request Form", 72, 45), target(newTarget)
{
	std::cout << "Parametrized RobotomyRequestForm named " << Form::getName() << " constructed." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &original): Form(original)
{
	std::cout << "Copied RobotomyRequestForm named " << Form::getName() << " constructed." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm named " << Form::getName() << " destroyed." << std::endl;
}

void	RobotomyRequestForm::executeFormSpecificAction() const
{
	std::cout << "*DRILLING NOISES*" << std::endl;
	srand(time(NULL));
	if (rand() % 2 == 0)
		std::cout << this->target << " successfully robotomized!" << std::endl;
	else
		std::cout << this->target << " robotomy failed!" << std::endl;
}
