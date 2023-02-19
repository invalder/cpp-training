/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 14:41:23 by nnakarac          #+#    #+#             */
/*   Updated: 2023/02/19 15:25:10 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Only 2 argument are accepted" << std::endl;
		std::cerr << "./<executable> <level>" << std::endl;
		return (1);
	}
	Harl	testHarl(argv[1]);
	testHarl.complain();
	return (0);
}
