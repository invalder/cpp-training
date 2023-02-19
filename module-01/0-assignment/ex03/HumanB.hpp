/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 02:06:52 by nnakarac          #+#    #+#             */
/*   Updated: 2023/02/19 14:41:54 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
private:
	std::string	_name;
	Weapon *_weapon;

public:
	HumanB(std::string name);
	~HumanB();

	void attack(void);
	void setWeapon(Weapon &weapon);
};

#endif
