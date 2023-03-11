/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 02:11:14 by nnakarac          #+#    #+#             */
/*   Updated: 2023/03/11 16:30:44 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): __Name("Prototype"), __HP(10), __EP(10), __ATK(0)
{
	std::cout << "Default Constructor for " << this->__Name << " With " << "HP: " \
	<< this->__HP << " Energy: " << this->__EP << " and Attack: " << this->__ATK \
	<< std::endl;
}

ClapTrap::ClapTrap(std::string const name): __Name(name), __HP(10), __EP(10), __ATK(0)
{
	std::cout << "Assign Constructor for " << this->__Name << " With " << "HP: " \
	<< this->__HP << " Energy: " << this->__EP << " and Attack: " << this->__ATK \
	<< std::endl;
}

ClapTrap::ClapTrap(std::string const name, int const hp, int const ep, int const atk): __Name(name), __HP(hp), __EP(ep), __ATK(atk)
{
	std::cout << "Assign Constructor for " << this->__Name << " With " << "HP: " \
	<< this->__HP << " Energy: " << this->__EP << " and Attack: " << this->__ATK \
	<< std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & ref)
{
	*this = ref;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Salute to " << this->__Name << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const &rhs)
{
	if (this != &rhs)
	{
		this->setName(rhs.getName());
	}
	return (*this);
}

std::string	ClapTrap::getName(void) const
{
	return (this->__Name);
}
int	ClapTrap::getHP(void) const
{
	return (this->__HP);
}

int	ClapTrap::getEP(void) const
{
	return (this->__EP);
}

int	ClapTrap::getATK(void) const
{
	return (this->__ATK);
}

void ClapTrap::setName(std::string const name)
{
	this->__Name = name;
}

void ClapTrap::setHP(unsigned int const amount)
{
	this->__HP = amount;
}

void ClapTrap::setEP(unsigned int const amount)
{
	this->__EP = amount;
}

void ClapTrap::setATK(unsigned int const amount)
{
	this->__ATK = amount;
}

void ClapTrap::attack(const std::string& target)
{
	// ClapTrap <name> attacks <target>, causing <damage> points of damage!
	if (this->__HP <= 0)
	{
		std::cout << this->__Name << " has died!!!!" << std::endl;
		return ;
	}
	if (this->__EP > 0)
	{
		std::cout << "ClapTrap <" << this->__Name << "> attacks <" << target << ">, causing <" \
			<< this->__ATK << "> points of damage!" << std::endl;
		this->__EP--;
	}
	else
		std::cout << this->__Name << " has Low Power!!!!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->__HP <= 0)
	{
		std::cout << this->__Name << " has died!!!!" << std::endl;
		return ;
	}
	if (this->__EP > 0)
	{
		std::cout << "Rapairing " << this->__Name << " Got " << amount << " HP" << std::endl;
		std::cout << this->__Name << " Remaining HP " << this->__HP + amount << std::endl;
		this->__HP += amount;
		this->__EP--;
	}
	else
		std::cout << this->__Name << " has Low Power!!!!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->__HP <= 0)
	{
		std::cout << this->__Name << " is just a wreck!!!!" << std::endl;
		return ;
	}
	if (this->__HP > 0)
	{
		std::cout << "Warning!!!!! " << this->__Name << " Got " << amount << " Damage!!!!" << std::endl;
		std::cout << this->__Name << " Remaining HP " << ((this->__HP - (int) amount) > 0 ? (this->__HP - (int) amount) : 0) << std::endl;
		this->__HP = (this->__HP - (int) amount) > 0 ? (this->__HP - (int) amount) : 0;
	}
	if (this->__HP <= 0)
		std::cout << this->__Name << " has died!!!!" << std::endl;
}
