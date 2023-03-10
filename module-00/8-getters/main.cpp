/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:34:34 by nnakarac          #+#    #+#             */
/*   Updated: 2023/02/14 00:24:16 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "getters.hpp"

int	main(void)
{
	Sample	instance;

	instance.setFoo(42);
	std::cout << "instance.getFoo() = " << instance.getFoo() << std::endl;
	instance.setFoo(65535);
	std::cout << "instance.getFoo() = " << instance.getFoo() << std::endl;

	return (0);
}
