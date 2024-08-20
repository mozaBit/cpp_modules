/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 16:24:58 by bmetehri          #+#    #+#             */
/*   Updated: 2024/08/20 17:43:46 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <string>
#include <cstring>
#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name ) {
	Zombie*	zombies;

	zombies = new Zombie[N];
	for (int idx = 0; idx < N; idx++)
	{
		std::stringstream myString;
		myString << name << idx;
		zombies[idx].setName(myString.str());
	}
	return (zombies);
}