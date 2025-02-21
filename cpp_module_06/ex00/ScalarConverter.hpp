/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 10:10:04 by bmetehri          #+#    #+#             */
/*   Updated: 2025/02/21 13:12:31 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCALARCONVERTER_HPP__
# define __SCALARCONVERTER_HPP__

#include <iostream>
#include <string>
#include "Limits.hpp"

class ScalarConverter {
	private:
		ScalarConverter();
	public:
		static	void convert(const std::string& str);
};

#endif
