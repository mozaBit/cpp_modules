/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:38:04 by bmetehri          #+#    #+#             */
/*   Updated: 2024/11/05 10:25:14 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name)
	: name(name) {};

HumanB::HumanB(std::string name, Weapon weapon)
	: name(name) {
		this->weapon = new Weapon(weapon);
	};

void	HumanB::setWeapon(Weapon weapon) {
	this->weapon = new Weapon(weapon);
};

void	HumanB::attack(void)
{
	std::cout << this->name << " attacks with their "
	<< this->weapon->getType() << std::endl;
}

HumanB::~HumanB() {
	delete this->weapon;
}