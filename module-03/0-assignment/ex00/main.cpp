/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 13:06:30 by nnakarac          #+#    #+#             */
/*   Updated: 2023/03/11 16:05:06 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main (void)
{
	ClapTrap proton;
	ClapTrap z("Zaku");

	for (int i = 0 ; i < 10 ; i++)
	{
		z.attack(proton.getName());
		proton.takeDamage(z.getATK());
		proton.beRepaired(1);
		proton.attack(z.getName());
		z.takeDamage(proton.getATK());
		z.beRepaired(1);
	}
}
