/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 11:45:15 by bmetehri          #+#    #+#             */
/*   Updated: 2024/11/19 08:57:45 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Animal.hpp"

AAnimal::AAnimal(std::string type) : _type(type) {
	std::cout << "Creating a new instance of AAnimal" << std::endl;
}

AAnimal::AAnimal(const AAnimal &origin) {
	*this = origin;
	std::cout << "Creating a copy of AAnimal object" << std::endl;
}

AAnimal & AAnimal::operator=( const AAnimal & src ) {
	this->_type = src._type;
	std::cout << "Copy Assigning AAnimal object" << std::endl;
	return *this;
}

AAnimal::~AAnimal(void) {
	std::cout << "Destroying AAnimal object" << std::endl;
}

std::string AAnimal::getType(void) const
{
	return this->_type;
}

// void AAnimal::makeSound() const
// {
// 	std::cout << "Some Weird AAnimal sound" << std::endl;
// }
