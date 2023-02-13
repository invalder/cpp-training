/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class-instance.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:29:35 by nnakarac          #+#    #+#             */
/*   Updated: 2023/02/13 17:38:43 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "class-instance.hpp"

Sample::Sample(void)
{
	std::cout << "Constructor Called" << std::endl;
	return ;
}

Sample::~Sample(void)
{
	std::cout << "Deconstructor Called" << std::endl;
	return ;
}
