/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 18:50:37 by bmetehri          #+#    #+#             */
/*   Updated: 2025/01/20 10:52:18 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT_HPP__
# define __BUREAUCRAT_HPP__

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat {
	private:
		const std::string	_name;
		int					_grade;
		class GradeTooHighException: public std::exception {
			private:
				std::string	_errMessage;
			public:
				GradeTooHighException(std::string errMessage) : _errMessage(errMessage) {}
				virtual const char*	what(void) const throw() {
					return (this->_errMessage.c_str());
				}
		};
		class GradeTooLowException: public std::exception {
			private:
				std::string	_errMessage;
			public:
				GradeTooLowException(std::string errMessage) : _errMessage(errMessage) {}
				virtual char*	what(void) const throw() {
					return (this->_errMessage.c_str());
				}
		};
	public:
		Bureaucrat(int grade, std::string name);
		std::string			getName(void) const;
		int					getGrade(void) const;
	
};

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& br);


#endif

