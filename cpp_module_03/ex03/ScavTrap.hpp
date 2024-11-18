/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 18:51:08 by bmetehri          #+#    #+#             */
/*   Updated: 2024/11/18 10:15:57 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP_HPP__
# define __SCAVTRAP_HPP__

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
	private:

	public:
		ScavTrap(std::string name);
		ScavTrap( const ClapTrap & origin );
		ScavTrap & operator=( const ScavTrap & src );
		virtual ~ScavTrap( void );

		virtual void	attack( const std::string& target );
		void guardGate();
};


#endif