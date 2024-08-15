/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChum.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 16:17:47 by bmetehri          #+#    #+#             */
/*   Updated: 2024/08/15 16:18:18 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

void		randomChump( std::string name ) {
	Zombie*	newZombie;

	newZombie = new Zombie(name);
	newZombie->annonce();
	delete newZombie;
};