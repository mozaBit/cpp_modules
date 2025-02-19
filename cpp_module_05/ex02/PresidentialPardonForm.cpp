#include "PresidentialPardonForm.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonAForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 04:49:04 by bmetehri          #+#    #+#             */
/*   Updated: 2025/02/13 04:49:05 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm::AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	// Inheritance
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	// Inheritance
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (this->getSituation() && executor.getGrade() <= this->getGte()) {
		std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox.";
	} else if (executor.getGrade() > this->getGte()) {
		throw AForm::GradeTooLowException("Error: executor grade is to low to execute");
	} else if (this->getSituation())
		throw AForm::FormNotSignedException("Error: Form is not signed");
}
