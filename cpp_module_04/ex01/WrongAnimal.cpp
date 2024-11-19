#include "WrongAnimal.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 01:55:59 by bmetehri          #+#    #+#             */
/*   Updated: 2024/11/19 01:56:00 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << "Creating a new instance of WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &origin)
{
	*this = origin;
	std::cout << "Creating a copy of WrongAnimal object" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal & src)
{
	this->_type = src._type;
	std::cout << "Copy Assigning WrongAnimal object" << std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Destroying WrongAnimal object" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return this->_type;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "Some Weird WrongAnimal voice" << std::endl;
}
