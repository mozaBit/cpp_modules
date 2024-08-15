/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 15:52:25 by bmetehri          #+#    #+#             */
/*   Updated: 2024/08/15 16:16:25 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie*		newZombie( std::string name );
void		randomChump( std::string name );

int	main(void)
{
	Zombie	*shaneWelsh;

	shaneWelsh = newZombie("Shane");
	shaneWelsh->annonce();
	randomChump("Rick");
	delete shaneWelsh;
	return (0);
}