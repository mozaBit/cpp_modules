/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 11:45:15 by bmetehri          #+#    #+#             */
/*   Updated: 2024/11/19 01:50:04 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Animal.hpp"

Animal::Animal(std::string type) : _type(type) {
	std::cout << "Creating a new instance of Animal" << std::endl;
}

Animal::Animal(const Animal &origin) {
	*this = origin;
	std::cout << "Creating a copy of Animal object" << std::endl;
}

Animal & Animal::operator=( const Animal & src ) {
	this->_type = src._type;
	std::cout << "Copy Assigning Animal object" << std::endl;
	return *this;
}

Animal::~Animal(void) {
	std::cout << "Destroying Animal object" << std::endl;
}

std::string Animal::getType(void) const
{
	return this->_type;
}

void Animal::makeSound() const
{
	std::cout << "Some Weird Animal sound" << std::endl;
}
