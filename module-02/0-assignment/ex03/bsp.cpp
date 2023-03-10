/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 21:24:25 by nnakarac          #+#    #+#             */
/*   Updated: 2023/03/10 22:19:00 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// Reference: https://www.tutorialspoint.com/Check-whether-a-given-point-lies-inside-a-Triangle#

static Fixed	abs(Fixed input)
{
	if (input < 0)
		return (input * -1);
	return (input);
}

Fixed triangleArea(Point const a, Point const b, Point const c)
{
	return ( ( ( a.getX() * ( b.getY() - c.getY() ) ) +
             ( b.getX() * ( c.getY() - a.getY() ) ) +
             ( c.getX() * ( a.getY() - b.getY() ) ) ) / 2 );
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	// std::cout << "aX:" << a.getX().toFloat() << std::endl;
	// std::cout << "aY:" << a.getY().toFloat() << std::endl;
	// std::cout << "bX:" << b.getX().toFloat() << std::endl;
	// std::cout << "bY:" << b.getY().toFloat() << std::endl;
	// std::cout << "cX:" << c.getX().toFloat() << std::endl;
	// std::cout << "cY:" << c.getY().toFloat() << std::endl;
	// std::cout << "pX:" << point.getX().toFloat() << std::endl;
	// std::cout << "pY:" << point.getY().toFloat() << std::endl;

	Fixed	abcArea = abs(triangleArea( a, b, c));
	Fixed	pabArea = abs(triangleArea( point, b, c));
	Fixed	pbcArea = abs(triangleArea( a, point, c));
	Fixed	pcaArea = abs(triangleArea( a, b, point));

	// std::cout << "Total:" << abcArea.getRawBits() << std::endl;
	// std::cout << "A1:" << pabArea.getRawBits() << std::endl;
	// std::cout << "A2:" << pbcArea.getRawBits() << std::endl;
	// std::cout << "A3:" << pcaArea.getRawBits() << std::endl;

	return (abcArea == (pabArea + pbcArea + pcaArea));
}
