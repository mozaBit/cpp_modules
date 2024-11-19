/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:13:56 by bmetehri          #+#    #+#             */
/*   Updated: 2024/11/19 08:55:33 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : AAnimal("Dog")
{
	this->_brain = new Brain();
	std::cout << "Creating a new instance of Dog" << std::endl;
}

Dog::Dog(const Dog &origin) : AAnimal(origin)
{
	*this = origin;
	std::cout << "Creating a copy of Dog object" << std::endl;
}

Dog &Dog::operator=(const Dog &src)
{
	this->_brain = src._brain;
	AAnimal::operator=(src);
	std::cout << "Copy Assigning Dog object" << std::endl;
	return *this;
}

Dog::~Dog(void)
{
	delete _brain;
	std::cout << "Destroying Dog object" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Awwwwwwwwwww!" << std::endl;
}
