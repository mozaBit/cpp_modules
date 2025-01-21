/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 18:48:42 by bmetehri          #+#    #+#             */
/*   Updated: 2025/01/20 10:33:27 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(int grade, std::string name) : _name(name) {
	if (grade > 150) {
		throw GradeTooHighException("Error: Grade is Too High!");
	} else if (grade < 1) {
		throw GradeTooLowException("Error: Grade is Too Low!");
	} else {
		this->_grade = grade;
	}
}

std::string	Bureaucrat::getName(void) const {
	return (this->_name);
}

int			Bureaucrat::getGrade(void) const {
	return (this->_grade);
}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& br) {
	os << br.getName() << ", bureaucrat grade " << br.getGrade();
  return (os);
}
