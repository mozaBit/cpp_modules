/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 17:39:13 by bmetehri          #+#    #+#             */
/*   Updated: 2025/02/19 20:21:37 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	// Nothing
}

Intern::~Intern(void)
{
	// Nothing
}

typedef AForm*	(*FormCreator)(const std::string& target);

static AForm* createShrubbery(const std::string& target) {
	return new ShrubberyCreationForm(target);
}

static AForm* createRobotomy(const std::string& target) {
	return new RobotomyRequestForm(target);
}

static AForm* createPresidential(const std::string& target) {
	return new PresidentialPardonForm(target);
}

AForm* Intern::makeForm(std::string formName, std::string formTarget)
{
	static FormCreator 			tabForm[3] = {&createShrubbery, &createRobotomy, &createPresidential};
	const static std::string	types[3] = {"shrubbery request", "robotomy request", "presidential request"};
	int							idx = 0;

	for (idx = 0; idx < 3; idx++) {
		if (types[idx] == formName) {
			std::cout << "Intern creates " << formName << std::endl;
			AForm* rValue = tabForm[idx](formTarget);
			return (rValue);
		}
	}
	if (idx == 3)
		std::cout << "Error: invalid form: name passed as parameter doesn't exist" << std::endl;
	return (0);
}
