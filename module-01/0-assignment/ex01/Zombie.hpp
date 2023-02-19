/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 17:10:38 by nnakarac          #+#    #+#             */
/*   Updated: 2023/02/19 01:35:19 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>

class Zombie {

	private:
		std::string	_name;
	public:
		Zombie(std::string name = "John");
		~Zombie(void);

		void	announce(void);
		void	set_name(std::string name);
};

Zombie*	newZombie( std::string name );
Zombie* zombieHorde( int N, std::string name = "John");

#endif
