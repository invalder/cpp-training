/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visibility.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:29:35 by nnakarac          #+#    #+#             */
/*   Updated: 2023/02/13 21:54:54 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "visibility.hpp"

Sample::Sample(void)
{
	std::cout << "Constructor Called" << std::endl;

	this->PublicFoo = 0;
	std::cout << "this->PublicFoo = " << this->PublicFoo << std::endl;

	this->_PrivateFoo = 42;
	std::cout << "this->_PrivateFoo = " << this->_PrivateFoo << std::endl;

	this->PublicBar();

	this->_PrivateBar();

	return ;
}

Sample::~Sample(void)
{
	std::cout << "Deconstructor Called" << std::endl;
	return ;
}

void	Sample::PublicBar(void) const
{
	std::cout << "Member function PublicBar called" << std::endl;
	std::cout << "PublicBar show Foo = " << this->PublicFoo << std::endl;
	std::cout << "PublicBar show PrivateFoo = " << this->_PrivateFoo << std::endl;

	return ;
}

void	Sample::_PrivateBar(void) const
{
	std::cout << "Member function PrivateBar called" << std::endl;
	std::cout << "PrivateBar show Foo = " << this->_PrivateFoo << std::endl;
	std::cout << "PrivateBar show PrivateFoo = " << this->_PrivateFoo << std::endl;

	return ;
}
