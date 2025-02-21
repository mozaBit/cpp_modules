/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 10:11:27 by bmetehri          #+#    #+#             */
/*   Updated: 2025/02/21 12:35:54 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int argc, char** argv) {

	if (argc != 2) {
		std::cout << "Usage: ./convert <literal>\n";
		return (1);
	}
	ScalarConverter::convert(argv[1]);
	return (0);
}

/**
 * Okay the objectif of ex00 is to create a class "ScalarConverter" that has a
 * method "convert" which takes a string and:
 * 			- It detect the type of the string from a variety of of 4 types:
 * 					* char
 * 					* int
 * 					* float
 * 					* double
 * 			- Then convert the string to it's Original type
 * 			- Then convert it to the other 3 types
 * 			- then displays the result of the conversion
 */
