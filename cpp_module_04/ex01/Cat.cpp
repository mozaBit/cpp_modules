/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:13:48 by bmetehri          #+#    #+#             */
/*   Updated: 2024/11/25 10:21:30 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	this->_brain = new Brain();
	std::cout << "Creating a new instance of Cat" << std::endl;
}

Cat::Cat(const Cat &origin) : Animal(origin)
{
	std::cout << "Creating a copy of Cat object" << std::endl;
}

Cat &Cat::operator=(const Cat &src)
{
	Animal::operator=(src);
	this->_brain = src._brain;
	std::cout << "Copy Assigning Cat object" << std::endl;
	return *this;
}

Cat::~Cat(void)
{
	delete _brain;
	std::cout << "Destroying Cat object" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "mieowwwwwwwwwwww!" << std::endl;
}


void Cat::displayIdeas() const
{
	std::string* ideas = this->_brain->getIdeas();
	for (size_t i = 0; i < 100; i++) {
		std::cout << ideas[i] << " ";
	}
	std::cout << std::endl;
	delete [] ideas;
}