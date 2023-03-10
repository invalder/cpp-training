/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 21:17:13 by nnakarac          #+#    #+#             */
/*   Updated: 2023/03/10 22:17:30 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ): _x(0), _y(0)
{
	// std::cout << "Default Constructor" << std:endl;
}

Point::Point( const float x, const float y): _x(x), _y(y)
{
	// std::cout << "Assign Constructor" << std:endl;
}

Point::Point( const Point &src): _x(src._x), _y(src._y)
{
	// std::cout << "Copy Constructor" << std:endl;
}

Point::~Point( void )
{
	// std::cout << "Deconstructor" << std:endl;
}

Point& Point::operator=(const Point &rhs)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		(Fixed) this->_x = rhs.getX();
		(Fixed) this->_y = rhs.getY();
	}
	return (*this);
}

Fixed Point::getX (void) const
{
	return	this->_x;
}

Fixed Point::getY (void) const
{
	return	this->_y;
}
