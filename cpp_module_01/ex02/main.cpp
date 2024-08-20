/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 17:50:16 by bmetehri          #+#    #+#             */
/*   Updated: 2024/08/20 18:04:02 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string		str;
	std::string*	stringPTR;
	std::string&	stringREF = str;

	str = "HI THIS IS BRAIN";
	stringPTR = &str;

	std::cout << "L\'adresse de la string en mémoire: 	" << &str << std::endl;
	std::cout << "L\'adresse stockée dans stringPTR: 	" << stringPTR << std::endl;
	std::cout << "L\'adresse stockée dans stringREF: 	" << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "La valeur de la string:		 	" << str << std::endl;
	std::cout << "La valeur pointée par stringPTR: 	" << *stringPTR << std::endl;
	std::cout << "La valeur pointée par stringREF: 	" << stringREF << std::endl;

	return (0);
}