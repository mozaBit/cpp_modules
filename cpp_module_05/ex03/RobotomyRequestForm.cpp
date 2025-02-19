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
	AForm::execute(executor);
	if (this->getSituation() && executor.getGrade() <= this->getGte()) {
		int	num = (rand() % 101);
		// std::cout << num << std::endl;
		if ( num % 3 == 0)
			std::cout << this->_target << " has been robotomized successfully" << std::endl;
		else
			std::cout << "the robotomy failed";
	}
}

const std::string &RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
}
