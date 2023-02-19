/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 01:24:19 by nnakarac          #+#    #+#             */
/*   Updated: 2023/02/19 01:39:37 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	N = 5;
	Zombie	*zombies = zombieHorde(N, "Papa John");
	for (int i = 0; i < N; i++)
	{
		zombies[i].announce();
	}
	delete[] zombies;
}
