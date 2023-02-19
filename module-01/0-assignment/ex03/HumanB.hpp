/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 02:06:52 by nnakarac          #+#    #+#             */
/*   Updated: 2023/02/19 02:52:39 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

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
