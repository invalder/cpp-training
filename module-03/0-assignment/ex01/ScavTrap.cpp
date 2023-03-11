/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 14:38:29 by nnakarac          #+#    #+#             */
/*   Updated: 2023/03/11 18:19:26 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	this->setHP(100);
	this->setEP(50);
	this->setATK(20);

	std::cout << "<Scav> " << this->getName() << " Default Con" << std::endl;

	this->statusReport();
}

ScavTrap::ScavTrap(std::string const name): ClapTrap(name, 100, 50, 20)
{
	std::cout << "<Scav> " << this->getName() << " Assign Con" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & ref)
{
	*this = ref;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Salmon to " << this->getName() << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
	if (this != &rhs)
	{
		this->setName(rhs.getName());
		this->setHP(100);
		this->setEP(50);
		this->setATK(20);
	}
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
	// ScavTrap <name> attacks <target>, causing <damage> points of damage!
	if (this->getHP() <= 0)
	{
		std::cout << this->getName() << " has died!!!!" << std::endl;
		return ;
	}
	if (this->getEP() > 0)
	{
		std::cout << "ScavTrap <" << this->getName() << "> attacks <" << target << ">, causing <" \
			<< this->getATK() << "> points of damage!" << std::endl;
		this->setEP(this->getEP() - 1);
	}
	else
		std::cout << this->getName() << " has Low Power!!!!" << std::endl;
}

void ScavTrap::statusReport(void)
{
	std::cout << "<Scav> " << this->getName() << std::endl;
	std::cout << "<HP> " << this->getHP() << std::endl;
	std::cout << "<EP> " << this->getEP() << std::endl;
	std::cout << "<ATK> " << this->getATK() << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << "<Scav> " << this->getName() << " Is Guarding" << std::endl;
}
