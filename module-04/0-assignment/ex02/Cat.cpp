/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 15:27:35 by nnakarac          #+#    #+#             */
/*   Updated: 2023/03/19 12:41:35 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): Animal("Cat")
{
	__brain = new Brain;
	std::cout << "Hello, I need some food" << std::endl;
}

Cat::Cat(Cat const & ref): Animal("Cat")
{
	_type = ref._type;
	__brain = new Brain(*ref.__brain);
	std::cout << "Pet me moreeee" << std::endl;
}

Cat& Cat::operator=(Cat const & rhs)
{
	if(this != &rhs)
	{
		_type = rhs._type;
		delete __brain;
		// use copy cons then copy assign
		__brain = new Brain(*rhs.__brain);
		std::cout << "Hmmm seem to be identical" << std::endl;
	}
	return *this;
}

Cat::~Cat(void)
{
	delete __brain;
	std::cout << "Oh no!!! the time has come. Just another one of nine" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow Meow Meow Ngow!!!" << std::endl;
}
