/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:56:48 by bmetehri          #+#    #+#             */
/*   Updated: 2024/11/20 18:48:18 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "FragTrap.hpp"

int	main( void ) {

	FragTrap*	a = new FragTrap("Bob");
	FragTrap*	b = new FragTrap("George");
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

	a->highFivesGuys();
	b->highFivesGuys();

	delete a;
	delete b;
	return (0);
}
