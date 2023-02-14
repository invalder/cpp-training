/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:34:34 by nnakarac          #+#    #+#             */
/*   Updated: 2023/02/14 22:40:03 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int main(void)
{
	// allocated on the stack
	Sample instance;
	// declared a pointer to the address of instance, \
	// which is stored in a variable (instancep)
	Sample * instancep = &instance;

	// declaring a pointer on an interger attribute of a Sample class
	int Sample::*p = NULL;
	// declaring a pointer on a const member function of a Sample class
	void (Sample::*f)(void) const;

	p = &Sample::foo; // this is not specific about which instance that p refers to

	std::cout << "Value of member foo = " << instance.foo << std::endl;
	// .* operator to specify the instance that p refers to
	instance.*p = 21; // directly using the instance
	std::cout << "Value of member foo = " << instance.foo << std::endl;
	instancep->*p = 42; // pointer to an instance
	std::cout << "Value of member foo = " << instance.foo << std::endl;

	f = &Sample::bar; // can't tell which instance that it's refering to

	(instance.*f)(); // use .* operator to specify the specify
	(instancep->*f)(); // or use ->* a pointer to refer to the instance

	return 0;
}
