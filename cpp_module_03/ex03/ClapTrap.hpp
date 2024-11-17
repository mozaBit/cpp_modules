/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:57:19 by bmetehri          #+#    #+#             */
/*   Updated: 2024/11/17 13:49:36 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __CLAPTRAP_HPP__
# define __CLAPTRAP_HPP__

#include <iostream>
#include <string>

class ClapTrap {
	private:
		std::string		_name;
		int				_health;
		int				_energy;
		int				_attack;

	protected:
		std::string	_getName(void);
		int			_getHealth(void);
		int			_getEnergy(void);
		int			_getAttackDamage(void);

		void		_setHealth(int newHealth);
		void		_setEnergy(int newEnergy);
	public:
		ClapTrap( std::string name );
		ClapTrap( const ClapTrap & origin );
		ClapTrap & operator=( const ClapTrap & src );
		virtual ~ClapTrap( void );

		virtual void	attack( const std::string& target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );
};

#endif