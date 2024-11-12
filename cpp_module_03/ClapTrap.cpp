/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:57:13 by bmetehri          #+#    #+#             */
/*   Updated: 2024/11/12 11:39:55 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name) {
	std::cout << "Constructor called : " << this->_name << "is created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &origin) : _name(origin._name) {
	std::cout << "Copy Constructor called : " << this->_name << "is created" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src) {
	this->_name = src._name;
	std::cout << "Copy assignement Constructor called : " << this->_name << "is created" << std::endl;
	return *this;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "Destructor called : " << this->_name << "is destroyed" << std::endl;
}



void ClapTrap::attack(const std::string &target)
{
}

void ClapTrap::takeDamage(unsigned int amount)
{
}

void ClapTrap::beRepaired(unsigned int amount)
{
}
