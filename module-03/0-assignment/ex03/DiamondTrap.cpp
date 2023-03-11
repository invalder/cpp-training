/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 17:33:28 by nnakarac          #+#    #+#             */
/*   Updated: 2023/03/11 18:25:58 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("Gundam_Clap", 100, 50, 30), __Name("Gundam")
{
	std::cout << "<Diamond> " << this->getName() << " Default Con" << std::endl;
}

DiamondTrap::DiamondTrap(std::string const name) : ClapTrap(name + "_Clap", 100, 50, 30), __Name(name)
{
	std::cout << "<Diamond> " << this->getName() << " Assign Con" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & ref)
{
	*this = ref;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Sardine to " << this->getName() << std::endl;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & rhs)
{
	if (this != &rhs)
	{
		this->__Name = rhs.__Name;
		this->setName(rhs.getName());
		this->setHP(rhs.getHP());
		this->setEP(rhs.getEP());
		this->setATK(rhs.getATK());
	}
	return (*this);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "Who Am I, Phom Pen NakSukSa " << this->getName() << " | " << ClapTrap::getName() << std::endl;
}
