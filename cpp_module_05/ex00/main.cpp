/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 18:49:47 by bmetehri          #+#    #+#             */
/*   Updated: 2025/02/05 11:23:32 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include <iostream>
#include <cassert>
#include <sstream>

int main() {
	// Test 1: Valid Construction
	{
		Bureaucrat b1("Alice", 1);
		assert(b1.getName() == "Alice");
		assert(b1.getGrade() == 1);
		
		Bureaucrat b2("Bob", 150);
		assert(b2.getName() == "Bob");
		assert(b2.getGrade() == 150);
		
		Bureaucrat b3("Charlie", 75);
		assert(b3.getGrade() == 75);
	}
	
	// Test 2: Invalid Construction
	{
		bool caught = false;
		try {
		    Bureaucrat invalid("Invalid", 0);
		} catch (const Bureaucrat::GradeTooHighException& e) {
		    caught = true;
		}
		assert(caught);
		
		caught = false;
		try {
		    Bureaucrat invalid("Invalid", 151);
		} catch (const Bureaucrat::GradeTooLowException& e) {
		    caught = true;
		}
		assert(caught);
	}
	
	// Test 3: Increment Grade
	{
		Bureaucrat b("TestIncrement", 2);
		b.incrementGrade();
		assert(b.getGrade() == 1);
		
		bool caught = false;
		try {
		    b.incrementGrade();
		} catch (const Bureaucrat::GradeTooHighException& e) {
		    caught = true;
		}
		assert(caught);
		assert(b.getGrade() == 1); // Grade remains unchanged
	}
	
	// Test 4: Decrement Grade
	{
		Bureaucrat b("TestDecrement", 149);
		b.decrementGrade();
		assert(b.getGrade() == 150);
		
		bool caught = false;
		try {
		    b.decrementGrade();
		} catch (const Bureaucrat::GradeTooLowException& e) {
		    caught = true;
		}
		assert(caught);
		assert(b.getGrade() == 150); // Grade remains unchanged
	}
	
	// Test 5: Insertion Operator
	{
		Bureaucrat b1("Eve", 1);
		std::ostringstream oss1;
		oss1 << b1;
		assert(oss1.str() == "Eve, bureaucrat grade 1.");
		
		Bureaucrat b2("John", 150);
		std::ostringstream oss2;
		oss2 << b2;
		assert(oss2.str() == "John, bureaucrat grade 150.");
		
		Bureaucrat b3("Doe", 75);
		std::ostringstream oss3;
		oss3 << b3;
		assert(oss3.str() == "Doe, bureaucrat grade 75.");
	}
	
	// Test 6: Exceptions via std::exception&
	{
		bool caught = false;
		try {
		    Bureaucrat b("High", 0);
		} catch (std::exception& e) {
		    caught = true;
		}
		assert(caught);
		
		caught = false;
		try {
		    Bureaucrat b("Low", 151);
		} catch (std::exception& e) {
		    caught = true;
		}
		assert(caught);
		
		Bureaucrat b("Test", 1);
		caught = false;
		try {
		    b.incrementGrade();
		} catch (std::exception& e) {
		    caught = true;
		}
		assert(caught);
		
		Bureaucrat b2("Test", 150);
		caught = false;
		try {
		    b2.decrementGrade();
		} catch (std::exception& e) {
		    caught = true;
		}
		assert(caught);
	}
	
	std::cout << "All tests passed!" << std::endl;
	return 0;
}
