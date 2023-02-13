/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:34:34 by nnakarac          #+#    #+#             */
/*   Updated: 2023/02/13 21:52:33 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "visibility.hpp"

int	main(void)
{
	Sample instance;

	instance.PublicFoo = 422;
	std::cout << "instance.PublicFoo = " << instance.PublicFoo << std::endl;
	// compilation error when you want to access private attributes
	// instance._PrivateFoo = 42;
	// std::cout << "instance._privateFoo = " << instance._PrivateFoo << std::endl;

	instance.PublicBar();
	// compilation error when you want to access private function
	// instance._PrivateBar();

	return (0);
}
