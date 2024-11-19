/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:13:52 by bmetehri          #+#    #+#             */
/*   Updated: 2024/11/19 08:56:40 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __CAT_HPP__
#define __CAT_HPP__

#include "Animal.hpp"
#include "Brain.hpp"
class Cat : public AAnimal {
	private:
		Brain*	_brain;
	public:
		Cat( void );
		Cat( const Cat & origin );
		Cat & operator=( const Cat & src );
		~Cat( void );

		/*virtual*/void	makeSound() const ;
};

#endif
