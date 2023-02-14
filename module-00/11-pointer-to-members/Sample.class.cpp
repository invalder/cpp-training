/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:29:35 by nnakarac          #+#    #+#             */
/*   Updated: 2023/02/14 22:38:31 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void) : foo(0)
{
	std::cout << "Constructor called" << std::endl;
	return;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

void Sample::bar(void) const
{
	std::cout << "Member function bar called" << std::endl;
	return;
}

