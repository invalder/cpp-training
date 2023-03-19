/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 16:06:19 by nnakarac          #+#    #+#             */
/*   Updated: 2023/03/19 07:25:01 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal("Dog")
{

}

Dog::Dog(Dog const & ref): Animal("Dog")
{
	*this = ref;
}

Dog& Dog::operator=(Dog const & rhs)
{
	if(this != &rhs)
	{
		_type = rhs._type;
	}
	return *this;
}

Dog::~Dog(void)
{

}

void	Dog::makeSound(void) const
{
	std::cout << "Bog Bog Bog Browwww!!!" << std::endl;
}
