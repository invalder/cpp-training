/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 15:27:35 by nnakarac          #+#    #+#             */
/*   Updated: 2023/03/18 16:15:13 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal("WrongCat")
{

}

WrongCat::WrongCat(WrongCat const & ref): WrongAnimal("WrongCat")
{
	*this = ref;
}

WrongCat& WrongCat::operator=(WrongCat const & rhs)
{
	if(this != &rhs)
	{
		_type = rhs._type;
	}
	return *this;
}

WrongCat::~WrongCat(void)
{

}

void	WrongCat::makeSound(void) const
{
	std::cout << "Chun Mai Chai Mawwwww!!!" << std::endl;
}
