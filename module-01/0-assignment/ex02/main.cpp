/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 01:41:35 by nnakarac          #+#    #+#             */
/*   Updated: 2023/02/19 01:46:34 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string	testStr = "HI THIS IS BRAIN";
	std::string	*stringPTR = &testStr;
	std::string	&stringREF = testStr;

	std::cout << "The memory address of the string variable:\t" << &testStr << std::endl;
	std::cout << "The memory address held by stringPTR:\t" << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF:\t" << &stringREF << std::endl;

	std::cout << "The Value of the string variable:\t" << testStr << std::endl;
	std::cout << "The Value pointed to by stringPTR:\t" << *stringPTR << std::endl;
	std::cout << "The Value pointed to by stringREF:\t" << stringREF << std::endl;
}
