/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 15:27:35 by nnakarac          #+#    #+#             */
/*   Updated: 2023/03/19 07:24:47 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): Animal("Cat")
{

}

Cat::Cat(Cat const & ref): Animal("Cat")
{
	*this = ref;
}

Cat& Cat::operator=(Cat const & rhs)
{
	if(this != &rhs)
	{
		_type = rhs._type;
	}
	return *this;
}

Cat::~Cat(void)
{

}

void	Cat::makeSound(void) const
{
	std::cout << "Meow Meow Meow Ngow!!!" << std::endl;
}
