/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 11:45:19 by bmetehri          #+#    #+#             */
/*   Updated: 2024/11/19 08:56:58 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AAnimal_HPP__
# define __AAnimal_HPP__

#include <iostream>
#include <string>

class AAnimal {
	private:

	protected:
		std::string	_type;

	public:
		AAnimal(std::string type = "generic");
		AAnimal( const AAnimal & origin );
		AAnimal & operator=( const AAnimal & src );
		virtual ~AAnimal( void );

		std::string	getType( void ) const;
		virtual void makeSound() const = 0;
};


#endif
