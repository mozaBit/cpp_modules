/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:19:16 by bmetehri          #+#    #+#             */
/*   Updated: 2024/11/06 11:15:34 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL_HPP__
#define __HARL_HPP__

#include <iostream>

#define DEBUG		"this is a DEBUG message\n"
#define INFO		"this is an INFO message\n"
#define WARNING		"this is a warning message\n"
#define ERROR		"this is an error message\n"

class Harl {
private:
	void	debug( void ) {
		std::cout << DEBUG;
	}

	void	info( void ) {
		std::cout << INFO;
	}

	void	warning( void ) {
		std::cout << WARNING;
	}

	void	error( void ) {
		std::cout << ERROR;
	}

public:
	void complain( std::string level );

};

#endif