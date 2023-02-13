/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init-list.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:29:35 by nnakarac          #+#    #+#             */
/*   Updated: 2023/02/13 21:04:30 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "init-list.hpp"

Sample::Sample(char p1, int p2, float p3) : a1(p1), a2(p2), a3(p3)
{
	std::cout << "Constructor Called" << std::endl;

	std::cout << "this->a1 is set to: " << this->a1 << std::endl;
	std::cout << "this->a2 is set to: " << this->a2 << std::endl;
	std::cout << "this->a3 is set to: " << this->a3 << std::endl;

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
