/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 17:00:16 by bmetehri          #+#    #+#             */
/*   Updated: 2025/01/22 17:00:17 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM_HPP__
# define __FORM_HPP__

#include <exception>
#include <iostream>
#include <ostream>
#include <string>

class Form {
  private:
    const std::string _name;
    bool              _signed;
    const int         _gradeToSign;
    const int         _gradeToExecute;

  public:
    Form(const int gradeToSign, const int gradeToExecute, const std::string name);
    ~Form(void);

    class GradeTooHighException: public std::exception {
      private:
        std::string   _errMessage;
      public:
        GradeTooHighException(std::string errMessage) : _errMessage(errMessage) {};
        virtual ~GradeTooHighException(void) throw() {};
        virtual const char* what(void) const throw() {
          return (this->_errMessage.c_str());
        };
    };

    class GradeTooLooException: public std::exception {
      private:
        std::string   _errMessage;
      public:
        GradeTooLooException(std::string errMessage) : _errMessage(errMessage) {};
        virtual ~GradeTooLooException(void) throw() {};
        virtual const char* what(void) const throw() {
          return (this->_errMessage.c_str());
        };
    };
};

std::ostream&  operator<<(std::ostream& os, const Form& fr);

#endif
