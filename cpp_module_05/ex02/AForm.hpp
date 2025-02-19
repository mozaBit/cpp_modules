/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 01:29:50 by bmetehri          #+#    #+#             */
/*   Updated: 2025/02/19 10:16:59 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AFORM_HPP__
# define __AFORM_HPP__

#include <string>
#include <iostream>
#include <fstream>

class Bureaucrat;

class AForm {
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_gradeToSign;
		const int			_gradeToExecute;

	public:
		AForm(std::string name, int gts, int gte);
		virtual ~AForm();

		std::string	getName(void) const;
		bool		getSituation(void) const;
		int			getGts(void) const;
		int			getGte(void) const;

		class GradeTooHighException : public std::exception {
			private:
				std::string _errMessage;
			public:
				GradeTooHighException(const std::string& errMessage) : _errMessage(errMessage) {};
				virtual ~GradeTooHighException() throw() { };
				virtual const char*	what(void) const throw() {
					return (this->_errMessage.c_str());
				};
		};

		class GradeTooLowException : public std::exception {
			private:
				std::string _errMessage;
			public:
				GradeTooLowException(const std::string& errMessage) : _errMessage(errMessage) {};
				virtual ~GradeTooLowException() throw() { };
				virtual const char*	what(void) const throw() {
					return (this->_errMessage.c_str());
				};
		};
		class FormNotSignedException : public std::exception {
			private:
				std::string _errMessage;
			public:
				FormNotSignedException(const std::string& errMessage) : _errMessage(errMessage) {};
				virtual ~FormNotSignedException() throw() { };
				virtual const char*	what(void) const throw() {
					return (this->_errMessage.c_str());
				};
		};
		void	beSigned(const Bureaucrat& br);
		virtual void	execute(Bureaucrat const & executor) const = 0;

};

std::ostream&	operator<<(std::ostream& os, const AForm& frm);

#endif



/**
 * We make a AForm class that contains (in private):
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
			- void	signAForm(const Forn& frm);

 *
 * 		std::ostream&	operator<<(std::ostream & os, const AForm & src);
 */
