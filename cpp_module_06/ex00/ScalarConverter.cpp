/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 10:09:58 by bmetehri          #+#    #+#             */
/*   Updated: 2025/02/21 20:59:07 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <sstream>

static void	specialLateral(std::string str) {
	// Treat Special laterals
	std::cout << "char: impossible\n" << "int: impossible\n";
	if (str == "nan" || str == "nanf")
		std::cout << "float: nanf\n" << "double: nan\n";
	if (str == "-inf" || str == "-inff")
		std::cout << "float: -inff\n" << "double: -inf\n";
	if (str == "+inf" || str == "+inff")
		std::cout << "float: +inff\n" << "double: +inf\n";
}

static void	oneCharacterLateral(std::string str) {
	// Treat one Char laterals
	if (isdigit(str[0]))
	{
		int i;
		std::istringstream iss(str);
		iss >> i;
		if (std::isprint(i))
			std::cout << "char: " << static_cast<char>(i) << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
		float f = static_cast<float>(i);
		double d = static_cast<double>(i);
		std::cout << "int: " << i << std::endl;
		std::cout << "float: " << f * 1.0f << std::endl;
		std::cout << "double: " << d * 1.0 << std::endl;
	} else {
		std::cout << "char: " << str << std::endl;
		int i = str[0];
		std::cout << "int: " << i << std::endl;
		std::cout << "float: " << static_cast<float>(i) << std::endl;
		std::cout << "double: " << static_cast<double>(i) << std::endl;
	}
}

void ScalarConverter::convert(const std::string& str)
{
	bool notInt = false, notFloat = false, isDouble = false;
	if (str == "nan" || str == "-inf" || str == "+inf" || str == "-inff" || str == "+inff")
		specialLateral(str);
	else if (str.length() == 1)
		oneCharacterLateral(str);
	else {
		int					iNum;
		float				fNum;
		double				dNum;
		std::istringstream	iss(str);

		//As tested in test.cpp
	}
	// after discovering the type converion to other types
}
