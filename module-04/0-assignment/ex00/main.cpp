/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:51:59 by nnakarac          #+#    #+#             */
/*   Updated: 2023/03/19 00:13:02 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();

		delete i;
		delete j;
		delete meta;
	}
	std::cout << "=============================" << std::endl;
	{
		const WrongAnimal* meta = new WrongAnimal();
		// This one is not working!!!
		// const Animal* c = new WrongAnimal();
		const WrongAnimal* c = new WrongCat();
		const WrongCat* cat = new WrongCat();

		c->makeSound();
		cat->makeSound();
		meta->makeSound();

		delete cat;
		delete c;
		delete meta;
	}
	return 0;
}
