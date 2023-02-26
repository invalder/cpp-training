/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 14:31:51 by nnakarac          #+#    #+#             */
/*   Updated: 2023/02/26 20:58:16 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __INTEGER_HPP__
# define __INTEGER_HPP__

#include <iostream>

// https://github.com/achrafelkhnissi/CPP_Modules/tree/master/Module_02
class Integer {
public:
	Integer(int const n = 0);
	~Integer();

	int getValue() const;

	Integer & operator=(Integer const & rhs); //rhs = right hand side
	Integer operator+(Integer const & rhs) const;
	Integer operator-(Integer const & rhs) const;
	Integer operator*(Integer const & rhs) const;
	Integer operator/(Integer const & rhs) const;

private:
	int _n;
};

std::ostream & operator<<(std::ostream & o, Integer const & rhs);

#endif
