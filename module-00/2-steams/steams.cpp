/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdio_steams.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:25:51 by nnakarac          #+#    #+#             */
/*   Updated: 2023/02/13 16:28:59 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	char	buff[512];

	std::cout << "Hello World" << std::endl;
	std::cout << "Input a Word: ";
	std::cin >> buff;
	std::cout << "You have entered: [" << buff << "]" << std::endl;
	return (0);
}
