/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 13:05:32 by bmetehri          #+#    #+#             */
/*   Updated: 2024/11/17 13:46:58 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : FragTrap(name), ScavTrap(name)
{
	_name = name;
	_ClapTrapName = name + "_clap_name";
	_health = FragTrap::_getHealth();
	_energy = ScavTrap::_getEnergy();
	_attack = FragTrap::_getAttackDamage();
}

DiamondTrap::DiamondTrap(const DiamondTrap &origin) : FragTrap(origin), ScavTrap(origin)
{
	*this = origin;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src)
{

	ScavTrap::operator=(src);
	this->_name = ScavTrap::_getName();
	this->_ClapTrapName = this->_name + "_clap_name";
	this->_energy = ScavTrap::_getEnergy();
	FragTrap::operator=(src);
	this->_health = FragTrap::_getHealth();
	this->_attack = FragTrap::_getAttackDamage();
	return *this;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap Destructor Called" << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "My name is: " << this->_name << std::endl;
	std::cout << "My ClapTrap Name is: " << this->_ClapTrapName << std::endl;
}
