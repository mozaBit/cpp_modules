/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 11:45:15 by bmetehri          #+#    #+#             */
/*   Updated: 2024/11/18 12:12:27 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Animal.hpp"

Animal::Animal(std::string type) : type(type) {
	std::cout << "Creating a new instance of Animal" << std::endl;
}

Animal::Animal(const Animal &origin) {
	*this = origin;
	std::cout << "Creating a copy of Animal object" << std::endl;
}

Animal & Animal::operator=( const Animal & src ) {
	*this = src;
	return *this;
	std::cout << "Copy Assigning Animal object" << std::endl;
}

Animal::~Animal(void) {
	std::cout << "Destroying Animal object" << std::endl;
}