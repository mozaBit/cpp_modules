/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:56:48 by bmetehri          #+#    #+#             */
/*   Updated: 2024/11/16 22:06:41 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ScavTrap.hpp"

int	main( void ) {

	ScavTrap	a("Bob");
	ScavTrap	b("George");

	a.attack("George");
	b.attack("Bob");
	return (0);
}
