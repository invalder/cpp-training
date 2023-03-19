/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 13:02:06 by nnakarac          #+#    #+#             */
/*   Updated: 2023/03/19 16:51:00 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(std::string const & type): _type(type)
{
	std::cout << "AMateria Created with type " << _type << std::endl;
}

AMateria::AMateria(AMateria const & ref): _type(ref._type)
{
	*this = ref;
}

AMateria& AMateria::operator=(AMateria const & rhs)
{
	if(this != &rhs)
	{
		_type = rhs._type;
	}
	return (*this);
}

AMateria::~AMateria()
{

}

std::string const & AMateria::getType() const
{
	return _type;
}

void	AMateria::use(ICharacter& target)
{
	(void) target;
	std::cout << target.getName() << " is using " << _type << std::endl;
}
