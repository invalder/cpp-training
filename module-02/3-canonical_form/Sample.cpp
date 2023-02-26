/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 17:40:13 by nnakarac          #+#    #+#             */
/*   Updated: 2023/02/26 17:52:24 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.hpp"

Sample::Sample(void) : _foo(0)
{
	std::cout << "Default Constructor called with foo = " << this->_foo << std::endl;
}

Sample::Sample(const int n) : _foo(n)
{
	std::cout << "Parametric Constructor called with foo = " << this->_foo << std::endl;
}

Sample::Sample(const Sample &src)
{
	std::cout << "Copy constructor called with foo = " << src.getFoo() << std::endl;
	*this = src;
}

Sample::~Sample(void)
{
	std::cout << "Deconstructor called" << std::endl;
}

Sample &Sample::operator=(const Sample &rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this != &rhs)
		this->_foo = rhs.getFoo();
	return (*this);
}

std::ostream & operator<<(std::ostream & o, Sample const & rhs)
{
	o << rhs.getFoo();
	return (o);
}

int Sample::getFoo(void) const
{
	return (this->_foo);
}
