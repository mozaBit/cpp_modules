/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 18:49:47 by bmetehri          #+#    #+#             */
/*   Updated: 2025/01/20 10:53:47 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

int	main(void)
{
	try {
		Bureaucrat	bam(239, "Bam");
		Bureaucrat	yassine(39, "yassine");
		Bureaucrat	hilal(1, "hilal");

	  std::cout << yassine << std::endl;
	} catch (std::exception &e) {
		std::cout << "Caught exception: " << e.what() << std::endl;
	}
	return (0);
}
