/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 01:56:35 by nnakarac          #+#    #+#             */
/*   Updated: 2023/02/19 02:54:10 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("Blaster");
		HumanA bob("Kenan", club);
		bob.attack();
		club.setType("some other type of Light Sabre");
		bob.attack();
	}
	{
		Weapon club = Weapon("Ploton Bomb");
		HumanB jim("Bo Kathan");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of Dark Sabre");
		jim.attack();
	}
	return 0;
}
