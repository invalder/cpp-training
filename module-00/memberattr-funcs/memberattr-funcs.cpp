/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memberattr-funcs.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:29:35 by nnakarac          #+#    #+#             */
/*   Updated: 2023/02/13 18:00:33 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "memberattr-funcs.hpp"

Sample::Sample(void)
{
	std::cout << "Constructor Called" << std::endl;

	this->foo = 42;
	std::cout << "this->foo is set to: " << this->foo << std::endl;

	this->bar((char *)"Okie Dokie");
	return ;
}

Sample::~Sample(void)
{
	std::cout << "Deconstructor Called" << std::endl;
	return ;
}

void	Sample::bar(char *str)
{
	std::cout << "A Barman says \"" << str << "\"" << std::endl;
	return ;
}
