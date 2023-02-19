/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 01:49:12 by nnakarac          #+#    #+#             */
/*   Updated: 2023/02/19 02:03:42 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string	wname)
{
	this->_type = wname;
}

Weapon::~Weapon(void)
{

}

const std::string& Weapon::getType(void) const
{
	return (this->_type);
}

void	Weapon::setType(std::string wname)
{
	this->_type = wname;
}
