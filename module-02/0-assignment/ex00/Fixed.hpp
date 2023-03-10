/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 23:23:36 by nnakarac          #+#    #+#             */
/*   Updated: 2023/03/11 01:44:17 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP__
# define __FIXED_HPP__

# include <iostream>
# include <string>

class Fixed
{
private:
	/* data */
	int					_fp;	//private __ protect _ public none
	static const int	_fbits;
public:
	Fixed(void);
	Fixed(const int n);
	Fixed(Fixed const & src);
	~Fixed();

	Fixed& operator=(const Fixed & rhs); //Canonical Form

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};
#endif
