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
	AForm::execute(executor);
	if (this->getSituation() && executor.getGrade() <= this->getGte()) {
		std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox.";
	}
}

const std::string &PresidentialPardonForm::getTarget(void) const
{
	return (this->_target);
}

