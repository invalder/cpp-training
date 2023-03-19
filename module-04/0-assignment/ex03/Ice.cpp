/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 14:09:52 by nnakarac          #+#    #+#             */
/*   Updated: 2023/03/19 14:18:47 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void): AMateria("ice")
{

}

Ice::Ice(Ice const & ref): AMateria(ref._type)
{

}

Ice & Ice::operator=(Ice const & rhs)
{
	if (this != &rhs)
		_type = rhs._type;
	return (*this);
}

Ice::~Ice()
{

}

AMateria* Ice::clone(void) const
{
	return (new Ice);
}

void	Ice::use(ICharacter & target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
