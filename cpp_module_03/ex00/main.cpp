/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:56:48 by bmetehri          #+#    #+#             */
/*   Updated: 2024/11/16 18:46:36 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

int	main( void ) {

	ClapTrap	a("Bob");
	ClapTrap	b("George");

	a.attack("George");
	b.attack("Bob");
	return (0);
}
