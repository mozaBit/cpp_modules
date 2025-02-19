#include "ShrubberyCreationForm.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationAForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 04:48:50 by bmetehri          #+#    #+#             */
/*   Updated: 2025/02/13 04:48:51 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm::AForm("ShrubberyCreationForm", 145, 137), _target(target) {
	// Inheritance
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	// Inheritance
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	AForm::execute(executor);
	if (this->getSituation() && executor.getGrade() <= this->getGte()) {
		std::string name = this->_target;
		name.append("_shrubbery");
		const char* canme = name.c_str();
		std::ofstream	newFile(canme, std::ios::out);
		newFile.close();
	}
}
