/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 01:29:50 by bmetehri          #+#    #+#             */
/*   Updated: 2025/01/27 08:11:13 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM_HPP__
# define __FORM_HPP__

#include <string>
#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"


class Form {
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_gradeToSign;
		const int			_gradeToExecute;

	public:
		Form(std::string name, int gts, int gte);
		virtual ~Form();

		std::string	getName(void) const;
		bool		getSituation(void) const;
		int			getGts(void) const;
		int			getGte(void) const;

		class GradeTooHighException : public std::exception {
			private:
				std::string _errMessage;
			public:
				GradeTooHighException(std::string errMessage) : _errMessage(errMessage) {};
				virtual ~GradeTooHighException() throw();
				virtual const char*	what(void) const throw() {
					return (this->_errMessage.c_str());
				};
		};

		class GradeTooLowException : public std::exception {
			private:
				std::string _errMessage;
			public:
				GradeTooLowException(std::string errMessage) : _errMessage(errMessage) {};
				virtual ~GradeTooLowException() throw();
				virtual const char*	what(void) const throw() {
					return (this->_errMessage.c_str());
				};
		};

		void	beSigned(const Bureaucrat& br);

};

std::ostream&	operator<<(std::ostream& os, const Form& frm);

#endif



/**
 * We make a Form class that contains (in private):
 * 		- const std::string	_name;
 * 		- bool 				_isSigned;
 * 		- const int			_gradeToSign;
 * 		- const int			_gradeToSign;
 *
 * 		- class GradeTooHighException
 * 		- class GradeTooLowException
 *
 * 		- int getGts(void);
 * 		- int getGte(void);
 * 		- bool getSituation(void);
 * 		- std::string getName;
 *
 * 		- void	beSigned(const Bureaucrat& br);

 * 		* in the Bureaucrat class
			- void	signForm(const Forn& frm);

 *
 * 		std::ostream&	operator<<(std::ostream & os, const Form & src);
 */
