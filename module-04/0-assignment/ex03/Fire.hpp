/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fire.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 13:32:41 by nnakarac          #+#    #+#             */
/*   Updated: 2023/03/19 16:55:22 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIRE_HPP__
# define __FIRE_HPP__

# include "AMateria.hpp"

class Fire: public AMateria
{
private:
	/* data */
public:
	Fire();
	Fire(Fire const & ref);
	Fire & operator=(Fire const & rhs);
	~Fire();

	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif
