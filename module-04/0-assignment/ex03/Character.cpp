/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 14:45:30 by nnakarac          #+#    #+#             */
/*   Updated: 2023/03/19 15:42:15 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name): __name(name)
{
	for (int i = 0; i < 4; i++)
		this->__inventory[i] = 0;
}

Character::Character(Character const & ref)
{
	this->__name = ref.__name;
	for (int i = 0; i < 4; i++)
	{
		this->__inventory[i] = 0;
		if (ref.__inventory[i])
			this->__inventory[i] = ref.__inventory[i]->clone();
	}
}

Character& Character::operator=(Character const &rhs)
{
	if (this != &rhs)
	{
		this->__name = rhs.__name;
		for (int i = 0; i < 4; i++)
		{
			if (rhs.__inventory[i])
				delete this->__inventory[i];
			if (rhs.__inventory[i])
				this->__inventory[i] = rhs.__inventory[i]->clone();
		}
	}
	return (*this);
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->__inventory[i] != 0)
			delete this->__inventory[i];
	}
}

std::string	const & Character::getName(void) const
{
	return (this->__name);
}

void	Character::equip(AMateria* materia)
{
	if (materia)
	{
		for (int i = 0; i < 4; i++)
		{
			if (!this->__inventory[i])
			{
				this->__inventory[i] = materia;
				return;
			}
		}
		std::cout << this->__name << " inventory is full. Drop something!!!" << std::endl;
	}
	else
		std::cout << "Grab nothing!!!!" << std::endl;
}

void	Character::unequip(int idx)
{
	if ((idx < 0 || idx >= 4) || !this->__inventory[idx])
		std::cout << idx << " slot is empty " << std::endl;
}

void	Character::use(int idx, ICharacter& target)
{
	if ((idx < 0 || idx >= 4) || !this->__inventory[idx])
		std::cout << this->__name << " cast nothing to " << target.getName() << std::endl;
	else
		this->__inventory[idx]->use(target);
}
