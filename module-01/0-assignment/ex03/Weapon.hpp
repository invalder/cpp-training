/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 01:48:56 by nnakarac          #+#    #+#             */
/*   Updated: 2023/02/19 14:42:16 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon{
	private:
		std::string	_type;

	public:
		Weapon(std::string	wname);
		~Weapon(void);

		const std::string& getType(void) const;
		void		setType(std::string wname);
};

#endif
