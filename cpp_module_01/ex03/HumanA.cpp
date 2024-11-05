/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:30:10 by bmetehri          #+#    #+#             */
/*   Updated: 2024/11/05 10:22:13 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon& weapon)
	: name(name), weapon(weapon) {};

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with their "
	<< this->weapon.getType() << std::endl;
}