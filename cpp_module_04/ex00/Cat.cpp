/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:13:48 by bmetehri          #+#    #+#             */
/*   Updated: 2024/11/18 13:37:52 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Creating a new instance of Cat" << std::endl;
}

Cat::Cat(const Cat &origin) : Animal(origin)
{
	std::cout << "Creating a copy of Cat object" << std::endl;
}

Cat &Cat::operator=(const Cat &src)
{
	Animal::operator=(src);
	std::cout << "Copy Assigning Cat object" << std::endl;
	return *this;
}

Cat::~Cat(void)
{
	std::cout << "Destroying Cat object" << std::endl;
}

void Cat::makeSound()
{
	std::cout << "mieowwwwwwwwwwww!" << std::endl;
}
