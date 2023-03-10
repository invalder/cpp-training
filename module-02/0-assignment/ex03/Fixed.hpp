/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 23:23:36 by nnakarac          #+#    #+#             */
/*   Updated: 2023/03/04 18:22:43 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP
# define __FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
private:
	/* data */
	int					_fp;
	static const int	_fbits;
public:
	Fixed(void);
	Fixed(const int n);
	Fixed(const float f);
	Fixed(Fixed const & src);
	~Fixed();

	Fixed&	operator=(const Fixed & rhs); //Canonical Form

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	float	toFloat(void) const;
	int		toInt(void) const;

	// Comparison Operators
	bool	operator>(const Fixed &rhs) const;
	bool	operator<(const Fixed &rhs) const;
	bool	operator>=(const Fixed &rhs) const;
	bool	operator<=(const Fixed &rhs) const;
	bool	operator==(const Fixed &rhs) const;
	bool	operator!=(const Fixed &rhs) const;

	// Arithmetic Operators
	Fixed	operator+(const Fixed & rhs) const;
	Fixed	operator-(const Fixed & rhs) const;
	Fixed	operator*(const Fixed & rhs) const;
	Fixed	operator/(const Fixed & rhs) const;

	// Increment / Decrement Operators
	Fixed&	operator++(void);	// ++a, prefix operators
	Fixed	operator++(int);	// a++, postfix operators
	Fixed&	operator--(void);	// --b, prefix operators
	Fixed	operator--(int);	// b--, postfix operators

	// Min / Max Operators
	static Fixed&	min(Fixed &a, Fixed &b);
	static Fixed&	max(Fixed &a, Fixed &b);
	static const Fixed&	min(const Fixed &a, const Fixed &b);
	static const Fixed&	max(const Fixed &a, const Fixed &b);
};

std::ostream&	operator<<(std::ostream & o, Fixed const & rhs);

#endif
