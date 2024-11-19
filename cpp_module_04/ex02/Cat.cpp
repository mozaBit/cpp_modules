/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:13:48 by bmetehri          #+#    #+#             */
/*   Updated: 2024/11/19 08:55:33 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : AAnimal("Cat")
{
	this->_brain = new Brain();
	std::cout << "Creating a new instance of Cat" << std::endl;
}

Cat::Cat(const Cat &origin) : AAnimal(origin)
{
	std::cout << "Creating a copy of Cat object" << std::endl;
}

Cat &Cat::operator=(const Cat &src)
{
	AAnimal::operator=(src);
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
