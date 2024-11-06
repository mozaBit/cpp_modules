/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:20:18 by bmetehri          #+#    #+#             */
/*   Updated: 2024/11/06 11:15:38 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <map>
#include "Harl.hpp"

void	Harl::complain(std::string level)
{
	std::map<std::string, int> myMap;
	myMap["DEBUG"] = 1;
	myMap["INFO"] = 2;
	myMap["WARNING"] = 3;
	myMap["ERROR"] = 4;

	switch (myMap[level])
	{
	case 1:
		debug();
		break;
	case 2:
		info();
		break;
	case 3:
		warning();
		break;
	case 4:
		error();
		break;
	default:
		std::cout << "level doesn\'t exist\n";
		break;
	}
}
