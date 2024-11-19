/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:13:56 by bmetehri          #+#    #+#             */
/*   Updated: 2024/11/19 01:50:31 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Creating a new instance of Dog" << std::endl;
}

Dog::Dog(const Dog &origin) : Animal(origin)
{
	std::cout << "Creating a copy of Dog object" << std::endl;
}

Dog &Dog::operator=(const Dog &src)
{
	Animal::operator=(src);
	std::cout << "Copy Assigning Dog object" << std::endl;
	return *this;
}

Dog::~Dog(void)
{
	std::cout << "Destroying Dog object" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Awwwwwwwwwww!" << std::endl;
}
