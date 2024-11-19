/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 01:55:08 by bmetehri          #+#    #+#             */
/*   Updated: 2024/11/19 02:17:19 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGCAT_HPP__
#define __WRONGCAT_HPP__

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	private:

	public:
		WrongCat( void );
		WrongCat( const WrongCat & origin );
		WrongCat & operator=( const WrongCat & src );
		~WrongCat( void );

		std::string	getType( void ) const;
		void		makeSound( void ) const;
};


#endif