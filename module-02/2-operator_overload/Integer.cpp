/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 14:38:12 by nnakarac          #+#    #+#             */
/*   Updated: 2023/02/26 16:40:00 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Integer.hpp"

Integer::Integer(const int n) : _n(n)
{
	std::cout << "Constructor called with value: " << n << std::endl;
}

Integer::~Integer(void)
{
	std::cout << "Deconstructor called with value: " << this->_n << std::endl;
}

int	Integer::getValue() const
{
	return this->_n;
}

Integer & Integer::operator=(const Integer &rhs)
{
	std::cout << "Assignment operator called from " << this->_n;
	std::cout << " to " << rhs.getValue() << std::endl;

	this->_n = rhs.getValue();

	return	*this;
}

Integer	Integer::operator+(const Integer &rhs) const
{
	std::cout << "Addition operator called with " << this->_n;
	std::cout << " and " << rhs.getValue() << std::endl;

	return Integer(this->_n + rhs.getValue());
}

Integer Integer::operator-(const Integer  &rhs) const
{
	std::cout << "Subtraction operator called with " << this->_n;
	std::cout << " and " << rhs.getValue() << std::endl;

	return Integer(this->_n - rhs.getValue());
}

std::ostream & operator<<(std::ostream & o, Integer const & rhs)
{
	o << rhs.getValue();
	return o;
}
