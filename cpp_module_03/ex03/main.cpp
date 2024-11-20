/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:56:48 by bmetehri          #+#    #+#             */
/*   Updated: 2024/11/20 19:31:30 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main( void ) {
	DiamondTrap	*a = new DiamondTrap("Bam");
	std::cout << std::endl;
	DiamondTrap	*b = new DiamondTrap("Micha");
	std::cout << std::endl;
	DiamondTrap	*c = new DiamondTrap("Karl");
	std::cout << std::endl;

	a->attack("Micha");
	std::cout << std::endl;
	b->takeDamage(30);
	std::cout << std::endl;

	b->beRepaired(1000);


	a->whoAmI();
	std::cout << std::endl;
	b->whoAmI();
	std::cout << std::endl;
	c->whoAmI();
	std::cout << std::endl;

	delete a;
	delete b;
	delete c;
	return (0);
}
