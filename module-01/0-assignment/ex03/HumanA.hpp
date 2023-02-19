/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 02:06:16 by nnakarac          #+#    #+#             */
/*   Updated: 2023/02/19 02:51:35 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
private:
	std::string	_name;
	Weapon& _weapon;

public:
	HumanA(std::string name, Weapon& wname);
	~HumanA();

	void attack(void);
};

#endif
