/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 17:23:55 by nnakarac          #+#    #+#             */
/*   Updated: 2023/02/18 18:03:14 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie(std::string name);
void randomChump(std::string name);

const std::string FIRST_NAMES[] = {
	"Emma",
	"Liam",
	"Olivia",
	"Noah",
	"Ava",
	"Elijah",
	"Charlotte",
	"William",
	"Sophia",
	"James",
	"Amelia",
	"Benjamin",
	"Isabella",
	"Lucas",
	"Mia",
	"Mason",
	"Harper",
	"Ethan",
	"Evelyn",
	"Alexander"
};

std::string pick_random_name()
{
	std::srand(std::time(0));
	int index = std::rand() % 20;
	return FIRST_NAMES[index];
}

int	main(void)
{
	Zombie *zzz = newZombie("John");
	zzz->announce();

	randomChump(pick_random_name());

	delete zzz;
}
