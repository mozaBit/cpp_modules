/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 08:14:04 by bmetehri          #+#    #+#             */
/*   Updated: 2024/11/25 10:30:04 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_HPP__
# define __BRAIN_HPP__

#include <iostream>
#include <string>

class Brain {
	private:
		std::string _ideas[100];
	public:
		Brain( void );
		Brain( const Brain & origin );
		Brain & operator =( const Brain & src );
		~Brain( void );

		std::string*	getIdeas() const;
};


#endif