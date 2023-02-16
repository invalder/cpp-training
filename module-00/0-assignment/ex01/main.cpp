/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:37:25 by nnakarac          #+#    #+#             */
/*   Updated: 2023/02/16 15:17:27 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "utils.hpp"

int	main(void)
{
	std::string		input = "";
	PhoneBook		phonebook;
	int				is_exit = 0;

	while (1)
	{
		std::cout << "Enter a command: ";
		getline(std::cin, input);
		input = str_toupper(input);
		if (!input.length())
		{
			input.clear();
			continue ;
		}

		if (input == "EXIT")
			is_exit = 1;
		else if (input == "ADD")
			phonebook.add_contact_prompt();
		else if (input == "SEARCH")
			phonebook.print_contact();
		else
			std::cout << "Invalid command" << std::endl;
		input.clear();

		if (is_exit)
		{
			std::cout << "Exiting..." << std::endl;
			break ;
		}
	}
}
