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
}

FragTrap::FragTrap(const FragTrap &origin) : ClapTrap(origin)
{

}

FragTrap::~FragTrap()
{

}

void FragTrap::highFivesGuys(void)
{
	std::cout << "this a positive high fives request" << std::endl;
}
