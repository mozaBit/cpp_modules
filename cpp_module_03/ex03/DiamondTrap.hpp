/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 01:45:00 by bmetehri          #+#    #+#             */
/*   Updated: 2024/11/20 19:31:04 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DIAMOND_HPP__
# define __DIAMOND_HPP__


#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>
#include <string>

class DiamondTrap : public FragTrap,  public ScavTrap {
	private:
		std::string	_name;
		std::string	_ClapTrapName;
		int			_health;
		int			_energy;
		int			_attack;
	public:
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap & origin);
	DiamondTrap & operator=(const DiamondTrap & src);
	~DiamondTrap( void );

	/*virtual*/ void	attack( const std::string& target );
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	void	whoAmI();
};


#endif