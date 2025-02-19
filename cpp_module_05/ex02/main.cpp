/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 18:49:47 by bmetehri          #+#    #+#             */
/*   Updated: 2025/02/19 17:11:30 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <cassert>
#include <fstream>
#include <sstream>

int main() {
	// Test 1: Form Construction and Getters
	{
		ShrubberyCreationForm shrubbery("home");
		assert(shrubbery.getName() == "ShrubberyCreationForm");
		assert(shrubbery.getSituation() == false);
		assert(shrubbery.getGts() == 145);
		assert(shrubbery.getGte() == 137);

		RobotomyRequestForm robotomy("Alice");
		assert(robotomy.getName() == "RobotomyRequestForm");
		assert(robotomy.getSituation() == false);
		assert(robotomy.getGts() == 72);
		assert(robotomy.getGte() == 45);

		PresidentialPardonForm pardon("Bob");
		assert(pardon.getName() == "PresidentialPardonForm");
		assert(pardon.getSituation() == false);
		assert(pardon.getGts() == 25);
		assert(pardon.getGte() == 5);
	}

	// Test 2: Form Signing
	{
		Bureaucrat b1("Alice", 145);
		Bureaucrat b2("Bob", 150);

		ShrubberyCreationForm shrubbery("garden");
		b1.signAForm(shrubbery);
		assert(shrubbery.getSituation() == true);

		bool caught = false;
		try {
			b2.signAForm(shrubbery);
		} catch (const AForm::GradeTooLowException& e) {
			caught = true;
		}
		assert(caught);
		assert(shrubbery.getSituation() == true); // Form remains signed
	}

	// Test 3: Form Execution
	{
		Bureaucrat b1("Alice", 137);
		Bureaucrat b2("Bob", 150);

		ShrubberyCreationForm shrubbery("backyard");
		b1.signAForm(shrubbery);

		// Successful execution
		b1.executeForm(shrubbery);
		std::ifstream file("backyard_shrubbery");
		assert(file.good()); // File should exist
		file.close();

		// Execution with unsigned form
		RobotomyRequestForm robotomy("Charlie");
		bool caught = false;
		try {
			b1.executeForm(robotomy);
		} catch (const AForm::FormNotSignedException& e) {
			caught = true;
		}
		assert(caught);
		// Execution with insufficient grade
		caught = false;
		try {
			b2.signAForm(shrubbery);
			b2.executeForm(shrubbery);
		} catch (const AForm::GradeTooLowException& e) {
			caught = true;
		}
		assert(caught);
	}

	// Test 4: RobotomyRequestForm Execution
	{
		Bureaucrat b1("Alice", 45);
		RobotomyRequestForm robotomy("Alice");

		b1.signAForm(robotomy);
		std::ostringstream oss;
		std::streambuf* original_cout_buffer = std::cout.rdbuf(); // Save original buffer
		std::cout.rdbuf(oss.rdbuf()); // Redirect cout to oss

		for (int i = 0; i < 10; ++i) {
			b1.executeForm(robotomy);
		}

		std::cout.rdbuf(original_cout_buffer); // Restore original buffer
		std::string output = oss.str();

		// std::cout << oss.str() << std::endl;
		// Now check assertions
		assert(output.find("has been robotomized successfully") != std::string::npos);
		assert(output.find("robotomy failed") != std::string::npos);
	}

	// Test 5: PresidentialPardonForm Execution
	{
		Bureaucrat b1("Alice", 5);
		PresidentialPardonForm pardon("Bob");

		b1.signAForm(pardon);
		std::ostringstream oss;
		std::streambuf* original_cout_buffer = std::cout.rdbuf(); // Save original buffer
		std::cout.rdbuf(oss.rdbuf()); // Redirect cout to oss
		b1.executeForm(pardon);
		std::cout.rdbuf(original_cout_buffer); // Restore original buffer
		assert(oss.str().find("has been pardoned by Zaphod Beeblebrox") != std::string::npos);
	}

	// Test 6: Exceptions via std::exception&
	{
		Bureaucrat b1("Alice", 150);
		ShrubberyCreationForm shrubbery("garden");

		bool caught = false;
		try {
			b1.executeForm(shrubbery);
		} catch (std::exception& e) {
			caught = true;
		}
		assert(caught);

		caught = false;
		try {
			shrubbery.execute(b1);
		} catch (std::exception& e) {
			caught = true;
		}
		assert(caught);
	}

	std::cout << "All tests passed!" << std::endl;
	return 0;
}
