/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 11:45:19 by bmetehri          #+#    #+#             */
/*   Updated: 2024/11/18 13:42:43 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_HPP__
# define __ANIMAL_HPP__

#include <iostream>
#include <string>

class Animal {
	private:

	protected:
		std::string	_type;

	public:
		Animal(std::string type = "generic");
		Animal( const Animal & origin );
		Animal & operator=( const Animal & src );
		virtual ~Animal( void );

		virtual void makeSound();
};


#endif
