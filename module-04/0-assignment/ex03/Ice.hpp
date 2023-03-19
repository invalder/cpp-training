/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 13:32:41 by nnakarac          #+#    #+#             */
/*   Updated: 2023/03/19 14:02:48 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICE_HPP__
# define __ICE_HPP__

# include "AMateria.hpp"

class Ice: public AMateria
{
private:
	/* data */
public:
	Ice();
	Ice(Ice const & ref);
	Ice & operator=(Ice const & rhs);
	~Ice();

	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif
