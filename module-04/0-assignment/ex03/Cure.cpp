/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 14:09:52 by nnakarac          #+#    #+#             */
/*   Updated: 2023/03/19 14:18:47 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void): AMateria("cure")
{

}

Cure::Cure(Cure const & ref): AMateria(ref._type)
{

}

Cure & Cure::operator=(Cure const & rhs)
{
	if (this != &rhs)
		_type = rhs._type;
	return (*this);
}

Cure::~Cure()
{

}

AMateria* Cure::clone(void) const
{
	return (new Cure);
}

void	Cure::use(ICharacter & target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
