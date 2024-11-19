/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:14:00 by bmetehri          #+#    #+#             */
/*   Updated: 2024/11/19 01:50:21 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_HPP__
#define __DOG_HPP__

#include "Animal.hpp"

class Dog : public Animal {
	private:

	public:
		Dog( void );
		Dog( const Dog & origin );
		Dog & operator=( const Dog & src );
		~Dog( void );

		void	makeSound() const ;
};

#endif
