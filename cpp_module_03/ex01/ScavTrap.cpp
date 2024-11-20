/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 18:51:02 by bmetehri          #+#    #+#             */
/*   Updated: 2024/11/20 18:38:28 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	std::cout << "ScavTrap Constructor called " << _getName() << " is created" << std::endl;
}

ScavTrap::ScavTrap(const ClapTrap &origin) : ClapTrap(origin) {
	std::cout << "ScavTrap Copy assignement Constructor called"<< std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
	ClapTrap::operator=(src);
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap Destructor called " << _getName() << " is Destroyed" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->_getHealth() <= 0 || this->_getEnergy() <= 0) {
		std::cout << "error: " << _getName() << " can't attack cause he has no Health or no Energy" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << _getName() << " attacks " << target <<", causing " << this->_getAttackDamage() << " points of damage!" << std::endl;
	_setEnergy(this->_getEnergy() - 1);
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_getName() << " is now in Gate keeper mode." << std::endl;
}
void ScavTrap::takeDamage(unsigned int amount)
{
	ClapTrap::takeDamage(amount);
}

void ScavTrap::beRepaired(unsigned int amount)
{
	ClapTrap::beRepaired(amount);
}