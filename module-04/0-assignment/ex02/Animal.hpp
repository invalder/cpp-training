/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:52:54 by nnakarac          #+#    #+#             */
/*   Updated: 2023/03/18 21:04:34 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_HPP__
# define __ANIMAL_HPP__

# include <iostream>

class Animal
{
	protected:
		std::string	_type;

	public:
		Animal(void);
		Animal(std::string const & type);
		Animal(Animal const &ref);

		Animal&	operator=(Animal const & rhs);

		virtual ~Animal();

		virtual void		makeSound(void) const;
		std::string	getType(void) const;
};

#endif
