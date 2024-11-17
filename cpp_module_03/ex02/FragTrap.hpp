/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 22:18:59 by bmetehri          #+#    #+#             */
/*   Updated: 2024/11/16 23:26:52 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP_HPP__
# define __FRAGTRAP_HPP__

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	public:
		FragTrap(std::string name);
		FragTrap(const FragTrap & origin);
		FragTrap operator=(const FragTrap & src);
		~FragTrap( void );


	/*virtual*/ void	attack( const std::string& target );
	void highFivesGuys(void);
};

#endif