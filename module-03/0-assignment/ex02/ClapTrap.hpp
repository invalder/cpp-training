/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 02:15:57 by nnakarac          #+#    #+#             */
/*   Updated: 2023/03/11 16:13:55 by nnakarac         ###   ########.fr       */
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
		ClapTrap(std::string const name, int const hp, int const ep, int const atk);
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
		void	setHP(unsigned int amount);
		void	setEP(unsigned int amount);
		void	setATK(unsigned int amount);
};

#endif
