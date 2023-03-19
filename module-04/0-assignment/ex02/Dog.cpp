/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 16:06:19 by nnakarac          #+#    #+#             */
/*   Updated: 2023/03/19 13:00:50 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal("Dog")
{
	__brain = new Brain;
	std::cout << "Good Boi has born with a Brain" << std::endl;
}

Dog::Dog(Dog const & ref): Animal("Dog")
{
	_type = ref._type;
	__brain = new Brain(*ref.__brain);
	std::cout << "Good Boi has a Clone with a Brain" << std::endl;
}

Dog& Dog::operator=(Dog const & rhs)
{
	if(this != &rhs)
	{
		_type = rhs._type;
		delete __brain;
		__brain = new Brain(*rhs.__brain);
		std::cout << "Cloning a Good Boi" << std::endl;
	}
	return *this;
}

Dog::~Dog(void)
{
	delete __brain;
	std::cout << "Boi gone, Brain too" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Bog Bog Bog Browwww!!!" << std::endl;
}
