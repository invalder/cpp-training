/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 13:32:41 by nnakarac          #+#    #+#             */
/*   Updated: 2023/03/19 14:02:48 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CURE_HPP__
# define __CURE_HPP__

# include "AMateria.hpp"

class Cure: public AMateria
{
private:
	/* data */
public:
	Cure();
	Cure(Cure const & ref);
	Cure & operator=(Cure const & rhs);
	~Cure();

	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif
