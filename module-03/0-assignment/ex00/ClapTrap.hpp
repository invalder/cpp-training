/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 02:15:57 by nnakarac          #+#    #+#             */
/*   Updated: 2023/03/11 13:46:34 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP_HPP__
# define __CLAPTRAP_HPP__

# include <iostream>
# include <string>

class ClapTrap{
	private:
		std::string	__Name;
		int			__HP;
		int			__EP;
		int			__ATK;
	public:
		ClapTrap();
		ClapTrap(std::string const name);
		ClapTrap(ClapTrap const &ref);

		~ClapTrap();

		ClapTrap & operator=(ClapTrap const &rhs);

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		std::string getName(void) const;
		int		getHP(void) const;
		int		getEP(void) const;
		int		getATK(void) const;

		void	setName(std::string const name);
};

#endif
