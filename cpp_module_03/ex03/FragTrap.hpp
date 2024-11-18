/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 22:18:59 by bmetehri          #+#    #+#             */
/*   Updated: 2024/11/17 16:07:06 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP_HPP__
# define __FRAGTRAP_HPP__

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class FragTrap : virtual public ClapTrap {
	public:
		FragTrap(std::string name);
		FragTrap(const FragTrap & origin);
		FragTrap & operator=(const FragTrap & src);
		virtual ~FragTrap( void );

		virtual void	attack( const std::string& target );
		void highFivesGuys(void);
};

#endif