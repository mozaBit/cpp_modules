/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 18:50:37 by bmetehri          #+#    #+#             */
/*   Updated: 2025/02/19 12:25:17 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT_HPP__
# define __BUREAUCRAT_HPP__

#include <iostream>
#include <string>
#include <exception>

class AForm;

class Bureaucrat {
	private:
		const std::string	_name;
		int					_grade;
	public:
		Bureaucrat(std::string name, int grade);

		std::string			getName(void) const;
		int					getGrade(void) const;
		void				incrementGrade();
		void				decrementGrade();

		void				signAForm(AForm & AForm);
		void				executeForm(AForm const & form);

		class GradeTooHighException: public std::exception {
			private:
				std::string	_errMessage;
			public:
				GradeTooHighException(const std::string& errMessage) : _errMessage(errMessage) {};
				virtual ~GradeTooHighException() throw() {};
				virtual const char*	what(void) const throw() {
					return (this->_errMessage.c_str());
				}
		};
		class GradeTooLowException: public std::exception {
			private:
				std::string	_errMessage;
			public:
				GradeTooLowException(const std::string& errMessage) : _errMessage(errMessage) {};
				virtual ~GradeTooLowException() throw() {};
				virtual const char*	what(void) const throw() {
					return (this->_errMessage.c_str());
				}
		};
};

std::ostream&	operator<<(std::ostream& os, const Bureaucrat & br);


#endif

