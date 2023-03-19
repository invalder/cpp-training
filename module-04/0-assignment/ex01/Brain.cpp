/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 00:15:05 by nnakarac          #+#    #+#             */
/*   Updated: 2023/03/19 07:56:05 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "(Brain) Where are we?" << std::endl;
}

Brain::Brain(const Brain & ref)
{
	*this = ref;
	std::cout << "(Brain) Same as you" << std::endl;
}

Brain & Brain::operator=(Brain const & rhs)
{
	if(this != &rhs)
	{
		for(int i = 0; i < 100; i++)
			this->__ideas[i] = rhs.__ideas[i];
		std::cout << "(Brain) Let me see what you think" << std::endl;
	}
	return (*this);
}

Brain::~Brain(void)
{
	for(int i = 0; i < 100; i++)
		this->__ideas[i] = "";
	std::cout << "(Brain) I'm forgetting everything!!!!" << std::endl;
}
