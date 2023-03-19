/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:03:22 by nnakarac          #+#    #+#             */
/*   Updated: 2023/03/19 16:37:18 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for(int i = 0; i < 4; i++)
		this->__materias[i] = 0;
}

MateriaSource::MateriaSource(MateriaSource const & ref)
{
	for(int i = 0; i < 4; i++)
	{
		this->__materias[i] = 0;
		if (ref.__materias[i])
			this->__materias[i] = ref.__materias[i]->clone();
	}
}

MateriaSource & MateriaSource::operator=(MateriaSource const & rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->__materias[i])
				delete this->__materias[i];
			this->__materias[i] = 0;
			if (rhs.__materias[i])
				this->__materias[i] = rhs.__materias[i]->clone();
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->__materias[i] != 0)
			delete this->__materias[i];
	}
}

void MateriaSource::learnMateria(AMateria* material)
{
	if (material)
	{
		for (int i = 0; i < 4; i++)
		{
			if (!this->__materias[i] && material)
			{
				this->__materias[i] = material;
				return ;
			}
		}
		std::cout << "Full Inventory Scroll" << std::endl;
	}
	else
		std::cout << "No Materia to Learn" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->__materias[i] && this->__materias[i]->getType() == type)
		{
			return (this->__materias[i]->clone());
		}
	}
	std::cout << "Nothing to create here" << std::endl;
	return (NULL);
}
