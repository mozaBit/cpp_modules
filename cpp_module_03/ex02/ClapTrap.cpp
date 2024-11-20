/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:57:13 by bmetehri          #+#    #+#             */
/*   Updated: 2024/11/20 18:40:56 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

std::string ClapTrap::_getName(void)
{
	return _name;
}

int ClapTrap::_getHealth(void)
{
	return _health;
}

int ClapTrap::_getEnergy(void)
{
	return _energy;
}

int ClapTrap::_getAttackDamage(void)
{
	return _attack;
}

void ClapTrap::_setHealth(int newHealth)
{
	this->_health = newHealth;
}

void ClapTrap::_setEnergy(int newEnergy)
{
	this->_energy = newEnergy;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _health(100), _energy(50), _attack(20)
{
	std::cout << "Constructor called : " << this->_name << " is created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &origin) {
	std::cout << "Copy Constructor called : " << this->_name << " is created" << std::endl;
	*this = origin;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src) {
	this->_name = src._name;
	this->_health = src._health;
	this->_energy = src._energy;
	this->_attack = src._attack;
	std::cout << "Copy assignement Constructor called : " << this->_name << " is created" << std::endl;
	return *this;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "Destructor called : " << this->_name << " is destroyed" << std::endl;
}



void ClapTrap::attack(const std::string &target)
{
	if (this->_health <= 0 || this->_energy <= 0) {
		std::cout << "error: " << _name << " can't attack cause he has no Health or no Energy" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target <<", causing " << this->_attack << " points of damage!" << std::endl;
	this->_energy--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->_health -= amount;
	if (this->_health < 0 ) {
		this->_health = 0;
	}
	std::cout << this->_name << " has taken " << amount << " damage! and " << _health << " is his new health"<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_health <= 0 || this->_energy <= 0) {
		std::cout << "error: " << _name << " can't be repaired cause he has no Health or no Energy" << std::endl;
		return ;
	}
	this->_energy--;
	this->_health += amount;
	std::cout << this->_name << " is repairing himeself with: " << amount << " amount, his new health is: " << this->_health << std::endl;
}