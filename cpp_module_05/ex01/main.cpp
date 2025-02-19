/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 18:49:47 by bmetehri          #+#    #+#             */
/*   Updated: 2025/02/19 17:30:04 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>
#include <cassert>
#include <sstream>

int main() {
	// Test 1: Valid Form Construction
	{
		Form f1("Tax Form", 50, 30);
		assert(f1.getName() == "Tax Form");
		assert(f1.getSituation() == false);
		assert(f1.getGts() == 50);
		assert(f1.getGte() == 30);

		Form f2("License Form", 1, 1);
		assert(f2.getGts() == 1);
		assert(f2.getGte() == 1);

		Form f3("Simple Form", 150, 150);
		assert(f3.getGts() == 150);
		assert(f3.getGte() == 150);
	}

	// Test 2: Invalid Form Construction
	{
		bool caught = false;
		try {
			Form invalid("Invalid Form", 0, 50);
		} catch (const Form::GradeTooHighException& e) {
			caught = true;
		}
		assert(caught);

		caught = false;
		try {
			Form invalid("Invalid Form", 50, 0);
		} catch (const Form::GradeTooHighException& e) {
			caught = true;
		}
		assert(caught);

		caught = false;
		try {
			Form invalid("Invalid Form", 151, 50);
		} catch (const Form::GradeTooLowException& e) {
			caught = true;
		}
		assert(caught);

		caught = false;
		try {
			Form invalid("Invalid Form", 50, 151);
		} catch (const Form::GradeTooLowException& e) {
			caught = true;
		}
		assert(caught);
	}

	// Test 3: Form Signing (beSigned)
	{
		Form f("Test Form", 50, 30);
		Bureaucrat b1("High Grade", 1);
		Bureaucrat b2("Low Grade", 100);

		// High-grade bureaucrat can sign
		f.beSigned(b1);
		assert(f.getSituation() == true);

		// Reset form
		Form f2("Test Form 2", 50, 30);

		// Low-grade bureaucrat cannot sign
		bool caught = false;
		try {
			f2.beSigned(b2);
		} catch (const Form::GradeTooLowException& e) {
			caught = true;
		}
		assert(caught);
		assert(f2.getSituation() == false);
	}

	// Test 4: Bureaucrat Signing Form (signForm)
	{
		Form f("Test Form", 50, 30);
		Bureaucrat b1("High Grade", 1);
		Bureaucrat b2("Low Grade", 100);

		// High-grade bureaucrat signs successfully
		std::ostringstream oss1;
		std::streambuf* oldCout = std::cout.rdbuf(oss1.rdbuf());
		b1.signForm(f);
		std::cout.rdbuf(oldCout);
		assert(oss1.str() == "High Grade signed Test Form\n");

		// Low-grade bureaucrat fails to sign
		Form f2("Test Form 2", 50, 30);
		try {
			b2.signForm(f2);
		} catch (Form::GradeTooLowException &e) {
			const std::string str = e.what();
			assert(str == "Low Grade couldn't sign Test Form 2 because grade is too low\n");
		}
	}

	// Test 5: Insertion Operator for Form
	{
		Form f("Test Form", 50, 30);
		std::ostringstream oss;
		oss << f;
		assert(oss.str() == "Form: Test Form, Status: Not Signed, Grade Required to Sign: 50, Grade Required to Execute: 30");
	}

	// Test 6: Exceptions via std::exception&
	{
		bool caught = false;
		try {
			Form invalid("Invalid Form", 0, 50);
		} catch (std::exception& e) {
			caught = true;
		}
		assert(caught);

		caught = false;
		try {
			Form invalid("Invalid Form", 50, 151);
		} catch (std::exception& e) {
			caught = true;
		}
		assert(caught);

		Form f("Test Form", 50, 30);
		Bureaucrat b("Low Grade", 100);
		caught = false;
		try {
			f.beSigned(b);
		} catch (std::exception& e) {
			caught = true;
		}
		assert(caught);
	}

	std::cout << "All tests passed!" << std::endl;
	return 0;
}
