/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 15:36:02 by bmetehri          #+#    #+#             */
/*   Updated: 2024/08/20 17:24:35 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_HPP__
# define __ZOMBIE_HPP__

#include <string>
#include <iostream>



class Zombie {
	private:
		std::string	name;

	public:
		void		annonce( void );

		void		setName(std::string name);

		Zombie(void);
		Zombie(std::string name);
		~Zombie();
};

#endif