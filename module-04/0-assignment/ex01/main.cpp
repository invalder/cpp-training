/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:51:59 by nnakarac          #+#    #+#             */
/*   Updated: 2023/03/19 08:18:40 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	std::cout << "Same as ex00" << std::endl;
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


	std::cout << "I don’t want to set the world on fire" << std::endl;
	{
		int	idx = 0;
		int	number_of_animal = 10;

		Animal* animal[number_of_animal]; // create array of animal

		std::cout << "New Creatures!!!!!!" << std::endl;
		for(; idx < number_of_animal / 2 ; idx++)
		{
			animal[idx] = new Dog();
		}
		for(; idx < number_of_animal ; idx++)
		{
			animal[idx] = new Cat();
		}

		std::cout << "Extinction" << std::endl;
		for(idx =0 ; idx < number_of_animal ; idx++)
		{
			delete animal[idx];
		}

	}
	std::cout << "=============================" << std::endl;

	std::cout << "Deeeeeeeeeeeeeeeep" << std::endl;
	{
		Dog	doggo;
		{
			std::cout << "copy con" << std::endl;
			Dog	boi(doggo);
			std::cout << "boi:" << &boi <<std::endl;
			std::cout << "doggo:" << &doggo <<std::endl;
		}
		{
			std::cout << "defautl then assign con" << std::endl;
			Dog	boi;
			std::cout << "boi:" << &boi <<std::endl;
			boi = doggo;
			std::cout << "boi:" << &boi <<std::endl;
			std::cout << "doggo:" << &doggo <<std::endl;
		}
	}
	std::cout << "=============================" << std::endl;
	// {
	// 	const WrongAnimal* meta = new WrongAnimal();
	// 	// This one is not working!!!
	// 	// const Animal* c = new WrongAnimal();
	// 	const WrongAnimal* c = new WrongCat();
	// 	const WrongCat* cat = new WrongCat();

	// 	c->makeSound();
	// 	cat->makeSound();
	// 	meta->makeSound();

	// 	delete cat;
	// 	delete c;
	// 	delete meta;
	// }
	return 0;
}
