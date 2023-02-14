/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:29:35 by nnakarac          #+#    #+#             */
/*   Updated: 2023/02/14 20:42:34 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void)
{
	std::cout << "Constructor called" << std::endl;
	Sample::_nbInst += 2;
	return;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	Sample::_nbInst -= 1;
	return;
}

// grant only read-only access to the attribute
int	Sample::getFoo(void) const
{
	// return a copy of the _foo attribute
	return this->_foo;
}

// // this way allows the user to change the _foo attribute
// void	Sample::setFoo(int v)
// {
// 	// don't allow _foo to have a negative value
// 	if (v >= 0)
// 		this->_foo = v;
// 	return;
// }

int	Sample::Compare(Sample *other) const
{
	if (this->_foo < other->getFoo())
		return (-1);
	else if (this->_foo > other->getFoo())
		return (1);
	return (0);
}

// With member function, CPP will pass as a parameter, an instance of your class
// so this-> can be used

// this pointer is not passed for a non member function, so you can't
// use this-> here
int	Sample::getNbInst(void)
{
	return Sample::_nbInst;
}

int	Sample::_nbInst = 0;
