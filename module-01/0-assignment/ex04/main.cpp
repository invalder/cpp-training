/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 09:16:45 by nnakarac          #+#    #+#             */
/*   Updated: 2023/02/19 10:27:40 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	main(int argc, char **argv)
{
	if(argc != 4)
	{
		std::cerr << "Only 4 argument are accepted" << std::endl;
		std::cerr << "./<executable> <filename> <String to Replace> <Replace with>" << std::endl;
		return (1);
	}

	try {
		Sed	testSed(argv[1], argv[2], argv[3]);
	}
	catch (const std::exception& ex){
		// Perform any necessary cleanup
		std::cerr << "Exception caught: " << ex.what() << std::endl;
		// Exit the program
		return 1;
	}

	return (0);
}
