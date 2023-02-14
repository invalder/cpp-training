/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:34:34 by nnakarac          #+#    #+#             */
/*   Updated: 2023/02/14 20:40:04 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

void f0(void)
{
	Sample instance;

	std::cout << "Number of instances = " << instance.getNbInst() << std::endl;

	return;
}

void f1(void)
{
	Sample instance;

	std::cout << "Number of instances = " << instance.getNbInst() << std::endl;
	f0();

	return;
}

int main(void)
{
	std::cout << "Number of instances = " << Sample::getNbInst() << std::endl;
	f1();
	std::cout << "Number of instances = " << Sample::getNbInst() << std::endl;

	return 0;
}
