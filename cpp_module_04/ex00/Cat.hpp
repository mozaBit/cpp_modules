/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:13:52 by bmetehri          #+#    #+#             */
/*   Updated: 2024/11/18 13:36:58 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __CAT_HPP__
#define __CAT_HPP__

#include "Animal.hpp"

class Cat : public Animal {
	private:

	public:
		Cat( void );
		Cat( const Cat & origin );
		Cat & operator=( const Cat & src );
		~Cat( void );

		void	makeSound();
};

#endif
