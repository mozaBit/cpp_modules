/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 08:14:02 by bmetehri          #+#    #+#             */
/*   Updated: 2024/11/25 10:30:29 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
#include <string>
#include <sstream>

Brain::Brain(void)
{
	for (int idx = 0; idx < 100; idx++)
	{
		std::stringstream myString;
		myString << "idea_" << idx;
		this->_ideas[idx] = myString.str();
	}
	std::cout << "" << std::endl;
}

Brain::Brain(const Brain &origin)
{
	*this = origin;
	std::cout << "" << std::endl;
}

Brain &Brain::operator=(const Brain &src)
{
	for (size_t idx = 0; idx < 100; idx++) {
		this->_ideas[idx] = src._ideas[idx];
	}
	std::cout << "" << std::endl;
	return *this;
}

Brain::~Brain( void ) {
	std::cout << "" << std::endl;
}

std::string *Brain::getIdeas() const
{
	std::string*	ideas = new std::string[100];
	for (size_t idx = 0; idx < 100; idx++) {
		ideas[idx] = this->_ideas[idx];
	}
	return ideas;
}