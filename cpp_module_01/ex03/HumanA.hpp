/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:26:39 by bmetehri          #+#    #+#             */
/*   Updated: 2024/08/20 18:36:46 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMAN_A_HPP__
# define __HUMAN_A_HPP__

#include "Weapon.hpp"

class HumanA {
	private:
		std::string name;
		Weapon weapon;
	public:
		HumanA(std::string name, Weapon weapon);

		void	attack(void);
};

#endif