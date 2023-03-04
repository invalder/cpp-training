/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 23:23:36 by nnakarac          #+#    #+#             */
/*   Updated: 2023/03/04 11:09:36 by nnakarac         ###   ########.fr       */
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
	Fixed(Fixed const & src);
	~Fixed();

	Fixed& operator=(const Fixed & rhs); //Canonical Form

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};
#endif
