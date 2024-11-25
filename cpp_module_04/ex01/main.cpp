/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:31:42 by bmetehri          #+#    #+#             */
/*   Updated: 2024/11/25 10:27:53 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
	const Cat* myCat = new Cat();
	const Dog* myDog = new Dog();


	myCat->makeSound();
	myDog->makeSound();
	myCat->displayIdeas();
	myDog->displayIdeas();
	delete myCat;
	delete myDog;


	const Dog*	basic = new Dog();
	const Dog*	tmp(basic);

	tmp->displayIdeas();

	delete tmp;
	return (0);
}