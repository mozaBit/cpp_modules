/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 01:55:08 by bmetehri          #+#    #+#             */
/*   Updated: 2024/11/19 08:56:22 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	std::cout << "Creating a new instance of WrongCat" << std::endl;
}

WrongCat::WrongCat(const WrongCat &origin) : WrongAnimal(origin)
{
	std::cout << "Creating a copy of WrongCat object" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &src)
{
	WrongAnimal::operator=(src);
	std::cout << "Copy Assigning WrongCat object" << std::endl;
	return *this;
}

WrongCat::~WrongCat(void)
{
	std::cout << "Destroying WrongCat object" << std::endl;
}

std::string WrongCat::getType(void) const
{
	return WrongAnimal::getType();
}

void WrongCat::makeSound(void) const
{
	WrongAnimal::makeSound();
}
