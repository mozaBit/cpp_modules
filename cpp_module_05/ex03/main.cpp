/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 18:49:47 by bmetehri          #+#    #+#             */
/*   Updated: 2025/02/19 20:20:58 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include <iostream>
#include <cassert>
#include <fstream>
#include <sstream>

int main() {
	// Test 1: Create valid forms and verify type, target, and output
	{
		Intern intern;
		std::stringstream buffer;
		std::streambuf* old = std::cout.rdbuf(buffer.rdbuf());

		AForm* shrubberyForm = intern.makeForm("shrubbery request", "Home");
		std::cout.rdbuf(old);

		assert(shrubberyForm != 0);
		assert(dynamic_cast<ShrubberyCreationForm*>(shrubberyForm) != 0);
		assert(shrubberyForm->getTarget() == "Home");
		assert(buffer.str() == "Intern creates shrubbery request\n");
		delete shrubberyForm;
	}
	{
		Intern intern;
		std::stringstream buffer;
		std::streambuf* old = std::cout.rdbuf(buffer.rdbuf());

		AForm* robotomyForm = intern.makeForm("robotomy request", "Bender");
		std::cout.rdbuf(old);

		assert(robotomyForm != 0);
		assert(dynamic_cast<RobotomyRequestForm*>(robotomyForm) != 0);
		assert(robotomyForm->getTarget() == "Bender");
		assert(buffer.str() == "Intern creates robotomy request\n");
		delete robotomyForm;
	}
	{
		Intern intern;
		std::stringstream buffer;
		std::streambuf* old = std::cout.rdbuf(buffer.rdbuf());

		AForm* pardonForm = intern.makeForm("presidential request", "Alice");
		std::cout.rdbuf(old);

		assert(pardonForm != 0);
		assert(dynamic_cast<PresidentialPardonForm*>(pardonForm) != 0);
		assert(pardonForm->getTarget() == "Alice");
		assert(buffer.str() == "Intern creates presidential request\n");
		delete pardonForm;
	}

	// Test 2: Handle invalid form name
	{
		Intern intern;
		std::stringstream buffer;
		std::streambuf* old = std::cout.rdbuf(buffer.rdbuf());

		AForm* invalidForm = intern.makeForm("invalid form", "Target");
		std::cout.rdbuf(old);

		assert(invalidForm == 0);
		std::string output = buffer.str();
		assert(output.find("invalid form") != std::string::npos);
	}

	// Test 3: Ensure forms are properly freed (no leaks, checked via valgrind)
	// This is implicit in the above tests via delete calls.

	std::cout << "All tests passed!" << std::endl;
	return 0;
}
