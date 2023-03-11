/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 14:38:29 by nnakarac          #+#    #+#             */
/*   Updated: 2023/03/11 18:18:59 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	this->setHP(100);
	this->setEP(100);
	this->setATK(30);

	std::cout << "<Frag> " << this->getName() << " Default Con" << std::endl;

	this->statusReport();
}

FragTrap::FragTrap(std::string const name): ClapTrap(name, 100, 100, 30)
{
	std::cout << "<Frag> " << this->getName() << " Assign Con" << std::endl;
}

FragTrap::FragTrap(FragTrap const & ref)
{
	*this = ref;
}

FragTrap::~FragTrap()
{
	std::cout << "Saruman to " << this->getName() << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
{
	if (this != &rhs)
	{
		this->setName(rhs.getName());
		this->setHP(rhs.getHP());
		this->setEP(rhs.getEP());
		this->setATK(rhs.getATK());
	}
	return (*this);
}

void FragTrap::attack(const std::string& target)
{
	// FragTrap <name> attacks <target>, causing <damage> points of damage!
	if (this->getHP() <= 0)
	{
		std::cout << this->getName() << " has died!!!!" << std::endl;
		return ;
	}
	if (this->getEP() > 0)
	{
		std::cout << "FragTrap <" << this->getName() << "> attacks <" << target << ">, causing <" \
			<< this->getATK() << "> points of damage!" << std::endl;
		this->setEP(this->getEP() - 1);
	}
	else
		std::cout << this->getName() << " has Low Power!!!!" << std::endl;
}

void FragTrap::statusReport(void)
{
	std::cout << "<Frag> " << this->getName() << std::endl;
	std::cout << "<HP> " << this->getHP() << std::endl;
	std::cout << "<EP> " << this->getEP() << std::endl;
	std::cout << "<ATK> " << this->getATK() << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "<Frag> " << this->getName() << " give you HighFives" << std::endl;
}
