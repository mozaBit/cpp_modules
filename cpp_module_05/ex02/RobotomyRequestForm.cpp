#include "RobotomyRequestForm.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestAForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 04:48:55 by bmetehri          #+#    #+#             */
/*   Updated: 2025/02/13 04:48:56 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <stdlib.h>

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm::AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	// Inheritance
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	// Inheritance
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (this->getSituation() && executor.getGrade() <= this->getGte()) {
		if ((rand() % 101) % 2 == 0)
			std::cout << this->_target << " has been robotomized successfully.";
		else
			std::cout << "that the robotomy failed";
	} else if (executor.getGrade() > this->getGte()) {
		throw AForm::GradeTooLowException("Error: executor grade is to low to execute");
	} else if (this->getSituation())
		throw AForm::FormNotSignedException("Error: Form is not signed");
}
