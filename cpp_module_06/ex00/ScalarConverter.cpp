/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 10:09:58 by bmetehri          #+#    #+#             */
/*   Updated: 2025/04/10 01:17:11 by bmetehri         ###   ########.fr       */
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
	bool isInt = false, isFloat = false, isDouble = false;
	if (str == "nan" || str == "-inf" || str == "+inf" || str == "-inff" || str == "+inff")
		specialLateral(str);
	else if (str.length() == 1)
		oneCharacterLateral(str);
	else {
		int					iNum;
		float				fNum;
		double				dNum;


		int					count = str.length() - 1;
		std::cout << count << std::endl;

		std::istringstream	iss(str);

		if (iss >> iNum && iss.eof()) {
				isInt = true;
			}	else if (iss >> dNum && iss.eof() && str[count] != 'f') {
					isDouble = true;
				}	else if (str[count] == 'f') {
						std::string str = str;
						str.pop_back();
						std::istringstream iss2(str.c_str());
						if (iss2 >> fNum  && iss2.eof())
							isFloat = true;
					}

		//As tested in test.cpp
	}
	// after discovering the type converion to other types
}
