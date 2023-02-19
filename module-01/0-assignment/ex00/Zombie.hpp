/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 17:10:38 by nnakarac          #+#    #+#             */
/*   Updated: 2023/02/18 17:54:35 by nnakarac         ###   ########.fr       */
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
		Zombie(std::string);
		~Zombie(void);

		void announce(void);
};

Zombie*	newZombie( std::string name );

#endif
