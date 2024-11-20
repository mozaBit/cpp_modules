#include "FragTrap.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 22:18:56 by bmetehri          #+#    #+#             */
/*   Updated: 2024/11/16 22:18:58 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap Constructor called " << _getName() << " is created" << std::endl;
}

FragTrap::FragTrap(const FragTrap &origin) : ClapTrap(origin)
{
	std::cout << "FragTrap Copy assignement Constructor called"<< std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called " << _getName() << " is Destroyed" << std::endl;
}

void FragTrap::attack(const std::string &target)
{
	if (this->_getHealth() <= 0 || this->_getEnergy() <= 0) {
		std::cout << "error: " << _getName() << " can't attack cause he has no Health or no Energy" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << _getName() << " attacks " << target <<", causing " << this->_getAttackDamage() << " points of damage!" << std::endl;
	_setEnergy(this->_getEnergy() - 1);
}

void FragTrap::takeDamage(unsigned int amount)
{
	ClapTrap::takeDamage(amount);
}

void FragTrap::beRepaired(unsigned int amount)
{
	ClapTrap::beRepaired(amount);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "this is a positive high fives request from " << this->_getName() << std::endl;
}

FragTrap FragTrap::operator=(const FragTrap &src)
{
	ClapTrap::operator=(src);
	return *this;
}
