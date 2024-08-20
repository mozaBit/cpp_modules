/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 15:52:25 by bmetehri          #+#    #+#             */
/*   Updated: 2024/08/20 17:30:56 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name );

int	main(void)
{
	Zombie	*zombies;

	zombies = zombieHorde(5, "shane");
	for (int idx = 0; idx < 5; idx++)
	{
		std::cout << "Zombie N: " << idx << " will announce" << std::endl;
		zombies[idx].annonce();
	}
	delete [] zombies;
	return (0);
}