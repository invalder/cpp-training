/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 00:56:25 by nnakarac          #+#    #+#             */
/*   Updated: 2023/03/04 18:18:24 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): _fp(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const n): _fp( n << _fbits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(const float f): _fp ( f * (1 << _fbits))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->_fp);
}

void Fixed::setRawBits(int const raw)
{
	this->_fp = raw;
}

float	Fixed::toFloat(void) const
{
	return static_cast<float>(this->getRawBits()) / (1 << _fbits);
}

int	Fixed::toInt(void) const
{
	return (this->_fp >> _fbits);
}

Fixed& Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->setRawBits(rhs.getRawBits());
	return (*this);
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}

// Comparison Operators
bool	Fixed::operator>(const Fixed &rhs) const
{
	return (this->getRawBits() > rhs.getRawBits());
}

bool	Fixed::operator<(const Fixed &rhs) const
{
	return (this->getRawBits() < rhs.getRawBits());
}

bool	Fixed::operator>=(const Fixed &rhs) const
{
	return (this->getRawBits() >= rhs.getRawBits());
}

bool	Fixed::operator<=(const Fixed &rhs) const
{
	return (this->getRawBits() <= rhs.getRawBits());
}

bool	Fixed::operator==(const Fixed &rhs) const
{
	return (this->getRawBits() == rhs.getRawBits());
}

bool	Fixed::operator!=(const Fixed &rhs) const
{
	return (this->getRawBits() != rhs.getRawBits());
}

// Arithmetic Operator

Fixed   Fixed::operator+( const Fixed &rhs ) const
{
    return Fixed( this->toFloat() + rhs.toFloat() );
}

Fixed   Fixed::operator-( const Fixed &rhs ) const
{
    return Fixed( this->toFloat() - rhs.toFloat() );
}

Fixed   Fixed::operator*( const Fixed &rhs ) const
{
    return Fixed( this->toFloat() * rhs.toFloat() );
}

Fixed   Fixed::operator/( const Fixed &rhs ) const
{
    return Fixed( this->toFloat() / rhs.toFloat() );
}

// Increment / Decrement

Fixed&	Fixed::operator++(void)	// ++a, prefix operators
{
	++(this->_fp);
	return (*this);
}

Fixed	Fixed::operator++(int)	// a++, postfix operators
{
	Fixed tmp(*this);
	tmp.setRawBits(this->getRawBits());
	this->_fp++;
	return (tmp);
}

Fixed&	Fixed::operator--(void)	// --b, prefix operators
{
	--(this->_fp);
	return (*this);
}

Fixed	Fixed::operator--(int)	// b--, postfix operators
{
	Fixed tmp(*this);
	tmp.setRawBits(this->getRawBits());
	this->_fp--;
	return (tmp);
}

// Max / Min
Fixed&	Fixed::min(Fixed &a, Fixed &b)
{
	if ( a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed&	Fixed::max(Fixed &a, Fixed &b)
{
	if ( a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

const Fixed&	Fixed::min(const Fixed &a, const Fixed &b)
{
	if ( a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

const Fixed&	Fixed::max(const Fixed &a, const Fixed &b)
{
	if ( a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

const int Fixed::_fbits = 8;
