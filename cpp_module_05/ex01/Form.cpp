/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 17:00:20 by bmetehri          #+#    #+#             */
/*   Updated: 2025/01/22 17:00:20 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <string>

Form::Form(const int gradeToSign, const int gradeToExecute, const std::string name) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute), _signed(false) {};

std::ostream&  operator<<(std::ostream& os, const Form& fr) {
  os << "" << "";
  return (os);
}
