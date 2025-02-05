/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 18:49:47 by bmetehri          #+#    #+#             */
/*   Updated: 2025/02/05 11:48:14 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// #include <iostream>
// #include <string>
// #include <exception>
// #include "Bureaucrat.hpp"

// #include "Bureaucrat.hpp"
// #include "Form.hpp"
// #include <iostream>

// int main() {
//     try {
//         // Test Bureaucrat creation with valid and invalid grades
//         Bureaucrat b1(1, "Alice");
//         Bureaucrat b2(150, "Bob");
//         std::cout << b1 << std::endl;
//         std::cout << b2 << std::endl;

//         // Uncomment to test exceptions
//         // Bureaucrat b3("Charlie", 0);  // Should throw GradeTooHighException
//         // Bureaucrat b4("David", 151); // Should throw GradeTooLowException

//         // Test increment and decrement
//         b2.incrementGrade();
//         std::cout << "After increment: " << b2 << std::endl;
//         b1.decrementGrade();
//         std::cout << "After decrement: " << b1 << std::endl;

//         // Uncomment to test out-of-bounds exceptions
//         // b1.incrementGrade(); // Should throw GradeTooHighException
//         // b2.decrementGrade(); // Should throw GradeTooLowException

//         // Test Form creation with valid and invalid grades
//         Form f1("Form A", 50, 100);
//         std::cout << f1 << std::endl;

//         // Uncomment to test exceptions
//         // Form f2("Form B", 0, 100);  // Should throw GradeTooHighException
//         // Form f3("Form C", 151, 100); // Should throw GradeTooLowException

//         // Test signing forms
//         Bureaucrat b5(75, "Eve");
//         Form f4("Form D", 100, 120);
//         Form f5("Form E", 50, 100);

//         std::cout << f4 << std::endl;
//         std::cout << f5 << std::endl;

//         b5.signForm(f4); // Should succeed
//         b5.signForm(f5); // Should fail

//         std::cout << f4 << std::endl;
//         std::cout << f5 << std::endl;
//     }
//     catch (std::exception &e) {
//         std::cerr << "Exception: " << e.what() << std::endl;
//     }
//     return 0;
// }
