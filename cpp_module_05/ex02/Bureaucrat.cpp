/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 18:48:42 by bmetehri          #+#    #+#             */
/*   Updated: 2025/02/19 13:23:00 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	if (grade < 1) {
		throw GradeTooHighException("Error: Grade is Too High!\n");
	} else if (grade > 150) {
		throw GradeTooLowException("Error: Grade is Too Low!\n");
	} else {
		this->_grade = grade;
	}
}

void				Bureaucrat::signAForm(AForm & AForm) {
	if (this->_grade <= AForm.getGts()) {
		AForm.beSigned(*this);
		std::cout << this->_name << " signed " << AForm.getName() << std::endl;
	} else {

		std::cout << this->_name << " couldn't sign " << AForm.getName() << " because grade is too low" << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const &form)
{
	bool	noError = true;

	try {
		form.execute(*this);
	} catch (std::exception& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
		noError = false;
	}
	if (noError)
		std::cout << this->getName() << " executed " << form.getName() << "." << std::endl;
}

std::string			Bureaucrat::getName(void) const {
	return (this->_name);
}

int					Bureaucrat::getGrade(void) const {
	return (this->_grade);
}

void				Bureaucrat::incrementGrade() {
	if (this->_grade - 1 >= 1)
		this->_grade--;
	else
		throw GradeTooHighException("Error: Cannot Increment, Grade is Too High!\n");
}

void				Bureaucrat::decrementGrade() {
	if (this->_grade + 1 <= 150)
		this->_grade++;
	else
		throw GradeTooLowException("Error: Cannot Decrement, Grade is Too Low!\n");
}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& br) {
	os << br.getName() << ", bureaucrat grade " << br.getGrade() << ".";
  return (os);
}
