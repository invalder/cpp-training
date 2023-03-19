/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fire.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 14:09:52 by nnakarac          #+#    #+#             */
/*   Updated: 2023/03/19 14:18:47 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fire.hpp"

Fire::Fire(void): AMateria("fire")
{

}

Fire::Fire(Fire const & ref): AMateria(ref._type)
{

}

Fire & Fire::operator=(Fire const & rhs)
{
	if (this != &rhs)
		_type = rhs._type;
	return (*this);
}

Fire::~Fire()
{

}

AMateria* Fire::clone(void) const
{
	return (new Fire);
}

void	Fire::use(ICharacter & target)
{
	std::cout << "* shoots an Fire bolt at " << target.getName() << " *" << std::endl;
}
