/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:31:42 by bmetehri          #+#    #+#             */
/*   Updated: 2024/11/19 02:18:29 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

// int	main(void) {
// 	Dog	newDog;
// 	newDog.makeSound();
// 	return (0);
// }

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();

const WrongAnimal* wrongA = new WrongAnimal();
const WrongAnimal* wrongC = new WrongCat();

std::cout << wrongC->getType() << " " << std::endl;
wrongC->makeSound(); //will output the WrongAnimal sound!
wrongA->makeSound(); //will output the WrongAnimal sound!
return 0;
}
