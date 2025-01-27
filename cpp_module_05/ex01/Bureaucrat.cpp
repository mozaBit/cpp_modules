/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 18:48:42 by bmetehri          #+#    #+#             */
/*   Updated: 2025/01/27 08:11:40 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(int grade, std::string name) : _name(name) {
	if (grade > 150) {
		throw GradeTooHighException("Error: Grade is Too High!\n");
	} else if (grade < 1) {
		throw GradeTooLowException("Error: Grade is Too Low!\n");
	} else {
		this->_grade = grade;
	}
}

std::string	Bureaucrat::getName(void) const {
	return (this->_name);
}

int	    		Bureaucrat::getGrade(void) const {
	return (this->_grade);
}

void			Bureaucrat::signForm(const Form& frm) const {
	if (this->getGrade() >= frm.getGts())
		std::cout << this->getName() << " signed " << frm.getName() << std::endl;
	else
		std::cout << this->getGrade() << " couldn't sign " << frm.getGts() << " because br grade is lower\n";
}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& br) {
	os << br.getName() << ", bureaucrat grade " << br.getGrade();
  return (os);
}
