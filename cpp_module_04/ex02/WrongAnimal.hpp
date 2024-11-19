/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 01:56:16 by bmetehri          #+#    #+#             */
/*   Updated: 2024/11/19 08:56:22 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WrongAnimal_HPP__
# define __WrongAnimal_HPP__

#include <iostream>
#include <string>

class WrongAnimal {
	private:
		std::string	_type;
	public:
		WrongAnimal(std::string type = "generic");
		WrongAnimal(const WrongAnimal & origin);
		WrongAnimal & operator=(const WrongAnimal & src);
		~WrongAnimal( void );

		std::string	getType( void ) const;
		void	makeSound( void ) const;

};

#endif