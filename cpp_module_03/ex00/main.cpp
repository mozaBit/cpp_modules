/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:56:48 by bmetehri          #+#    #+#             */
/*   Updated: 2024/11/20 18:33:24 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

int	main( void ) {

	ClapTrap*	a = new ClapTrap("Bob");
	ClapTrap*	b = new ClapTrap("George");
	ClapTrap	c(*a);
	ClapTrap*	d = b;

	a->attack("George");
	b->takeDamage(2);
	b->attack("Bob");
	a->takeDamage(2);

	a->beRepaired(13);
	b->beRepaired(26);

	d->attack("Micha");
	c.takeDamage(2);
	c.attack("Dimitry");
	d->takeDamage(2);

	c.beRepaired(3);
	d->beRepaired(6);

	delete a;
	delete b;
	return (0);
}
