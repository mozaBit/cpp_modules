/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 02:08:41 by bmetehri          #+#    #+#             */
/*   Updated: 2025/02/13 04:13:36 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(std::string name, int gts, int gte) : _name(name), _isSigned(false), _gradeToSign(gts), _gradeToExecute(gte) {
	if (gte > 150 || gts > 150) {
		throw GradeTooLowException("Error: grade is too low");
	} else if (gte < 1 || gts < 1) {
		throw GradeTooHighException("Error: grade is too High");
	}
};

AForm::~AForm() { };

std::string AForm::getName(void) const {
	return (this->_name);
}

bool		AForm::getSituation(void) const {
	return (this->_isSigned);
}

int			AForm::getGts(void) const {
	return (this->_gradeToSign);
}

int			AForm::getGte(void) const {
	return (this->_gradeToExecute);
}

void	AForm::beSigned(const Bureaucrat & br) {
	if (br.getGrade() <= this->_gradeToSign) {
		this->_isSigned = true;
	} else
		throw GradeTooLowException("Error: Bureaucrat grade is too low to sign this AForm");
}

// void AForm::execute(Bureaucrat const &executor) const
// {
// 	// Does Nothing, Overriden By Children
// }

std::ostream&	operator<<(std::ostream& os,const AForm& frm) {
	os << "AForm: " << frm.getName() << ", ";
	os << "Status: ";
	frm.getSituation() == true ? os << "Signed" << ", " : os << "Not Signed" << ", ";
	os << "Grade Required to Sign: " << frm.getGts() << ", ";
	os << "Grade Required to Execute: " << frm.getGte();
	return (os);
}
