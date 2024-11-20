/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:56:48 by bmetehri          #+#    #+#             */
/*   Updated: 2024/11/20 18:37:28 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ScavTrap.hpp"

int	main( void ) {

	ScavTrap*	a = new ScavTrap("Bob");
	ScavTrap*	b = new ScavTrap("George");
	ClapTrap*	c(a);
	ClapTrap*	d = b;

	a->attack("George");
	b->takeDamage(20);
	b->attack("Bob");
	a->takeDamage(20);

	a->beRepaired(13);
	b->beRepaired(26);

	d->attack("Micha");
	c->takeDamage(20);
	c->attack("Dimitry");
	d->takeDamage(20);

	c->beRepaired(3);
	d->beRepaired(6);

	a->guardGate();
	b->guardGate();

	delete a;
	delete b;
	return (0);
}


/*
	-- MORE TESTS IN MAIN.CPP FOR EX00 & EX01.
	-- VERIFY CANONICAL FORM OF ALL STRUCTS.

*/
