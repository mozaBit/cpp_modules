/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 02:08:41 by bmetehri          #+#    #+#             */
/*   Updated: 2025/02/13 04:13:36 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string name, int gts, int gte) : _name(name), _isSigned(false), _gradeToSign(gts), _gradeToExecute(gte) {
	if (gte > 150 || gts > 150) {
		throw GradeTooLowException("Error: grade is too low");
	} else if (gte < 1 || gts < 1) {
		throw GradeTooHighException("Error: grade is too High");
	}
};

Form::~Form() { };

std::string Form::getName(void) const {
	return (this->_name);
}

bool		Form::getSituation(void) const {
	return (this->_isSigned);
}

int			Form::getGts(void) const {
	return (this->_gradeToSign);
}

int			Form::getGte(void) const {
	return (this->_gradeToExecute);
}

void	Form::beSigned(const Bureaucrat & br) {
	if (br.getGrade() <= this->_gradeToSign) {
		this->_isSigned = true;
	} else
		throw GradeTooLowException("Error: Bureaucrat grade is too low to sign this Form");
}


std::ostream&	operator<<(std::ostream& os,const Form& frm) {
	os << "Form: " << frm.getName() << ", ";
	os << "Status: ";
	frm.getSituation() == true ? os << "Signed" << ", " : os << "Not Signed" << ", ";
	os << "Grade Required to Sign: " << frm.getGts() << ", ";
	os << "Grade Required to Execute: " << frm.getGte();
	return (os);
}
