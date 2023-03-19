/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 15:02:59 by nnakarac          #+#    #+#             */
/*   Updated: 2023/03/19 12:39:36 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Just an Animal")
{
	// Default Construction
}

Animal::Animal(std::string const & type): _type(type)
{
	// Assign Construction
}

Animal::Animal(Animal const & ref)
{
	// Copy Construction
	*this = ref;
}

Animal::~Animal(void)
{
	// Deconstruction
}

Animal &	Animal::operator=(Animal const & rhs)
{
	if(this != &rhs)
	{
		this->_type = rhs.getType();
	}
	return (*this);
}

void	Animal::makeSound(void) const
{
	std::cout << "Sus Thummada" << std::endl;
}

std::string Animal::getType(void) const
{
    return (this->_type);
}
