/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 14:22:11 by nnakarac          #+#    #+#             */
/*   Updated: 2023/03/19 15:21:31 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER_HPP__
# define __CHARACTER_HPP__

#include "ICharacter.hpp"

class Character: public ICharacter
{
	private:
		std::string __name;
		AMateria*	__inventory[4];
	public:
		Character(const std::string& name);
		Character(const Character& ref);
		Character& operator=(const Character& rhs);
		~Character();

		std::string const & getName() const;
		void equip(AMateria* materia);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif
