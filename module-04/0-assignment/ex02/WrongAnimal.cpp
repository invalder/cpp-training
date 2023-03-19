/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 15:02:59 by nnakarac          #+#    #+#             */
/*   Updated: 2023/03/18 21:05:30 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("Just a Wrong Animal")
{
	// Default Construction
}

WrongAnimal::WrongAnimal(std::string const & type): _type(type)
{
	// Assign Construction
}

WrongAnimal::WrongAnimal(WrongAnimal const & ref)
{
	// Copy Construction
	*this = ref;
}

WrongAnimal::~WrongAnimal(void)
{
	// Deconstruction
}

WrongAnimal &	WrongAnimal::operator=(WrongAnimal const & rhs)
{
	if(this != &rhs)
	{
		this->_type = rhs.getType();
	}
	return (*this);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Sus mai Thummada" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
    return (this->_type);
}
