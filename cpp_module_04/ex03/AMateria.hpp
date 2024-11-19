/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 09:38:13 by bmetehri          #+#    #+#             */
/*   Updated: 2024/11/19 10:03:49 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AMATERIA_HPP__
#define __AMATERIA_HPP__

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class AMateria {
	protected:
		std::string	_type;
	public:
		AMateria(std::string const & type);

		std::string const & getType() const;

		virtual	AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif