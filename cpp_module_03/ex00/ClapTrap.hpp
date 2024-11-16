/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:57:19 by bmetehri          #+#    #+#             */
/*   Updated: 2024/11/16 11:39:37 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class ClapTrap {
	private:
		std::string		_name;
		int				_health;
		int				_energy;
		int				_attack;

	public:
		ClapTrap( std::string name );
		ClapTrap( const ClapTrap & origin );
		ClapTrap & operator=( const ClapTrap & src );
		~ClapTrap( void );

		void	attack( const std::string& target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );
};
