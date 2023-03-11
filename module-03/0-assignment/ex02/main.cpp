/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 13:06:30 by nnakarac          #+#    #+#             */
/*   Updated: 2023/03/11 17:19:12 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main (void)
{
	ScavTrap proton;
	FragTrap Zaku("Zaku");

	proton.guardGate();
	Zaku.highFivesGuys();

	for (int i = 0 ; i < 10 ; i++)
	{
		if (Zaku.getHP() > 0 && Zaku.getEP() > 0)
		{
			Zaku.attack(proton.getName());
			proton.takeDamage(Zaku.getATK());
		}
		if (proton.getHP() > 0 && proton.getEP() > 0)
		{
			proton.beRepaired(1);
			proton.attack(Zaku.getName());
			Zaku.takeDamage(proton.getATK());
		}
		if (Zaku.getHP() > 0 && Zaku.getEP() > 0)
			Zaku.beRepaired(1);
	}
}
