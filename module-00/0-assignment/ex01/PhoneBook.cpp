/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:04:02 by nnakarac          #+#    #+#             */
/*   Updated: 2023/02/16 16:46:58 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "utils.hpp"

PhoneBook::PhoneBook(void)
{
	PhoneBook::_index = 0;
}

PhoneBook::~PhoneBook(void)
{
}

int	PhoneBook::add_contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret)
{
	Contact	contact;
	int		index = PhoneBook::_index;

	contact.set_first_name(first_name);
	contact.set_last_name(last_name);
	contact.set_nickname(nickname);
	contact.set_phone_number(phone_number);
	contact.set_secret(darkest_secret);
	contact.set_index(index);
	this->_contacts[index] = contact;
	PhoneBook::_index = (PhoneBook::_index + 1) % 8;
	return (0);
}

void PhoneBook::add_contact_prompt(void)
{
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

	std::cout << "First name: ";
	std::getline(std::cin, first_name);
	std::cout << "Last name: ";
	std::getline(std::cin, last_name);
	std::cout << "Nickname: ";
	std::getline(std::cin, nickname);
	std::cout << "Phone number: ";
	std::getline(std::cin, phone_number);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, darkest_secret);

	if (this->contact_valididy(first_name, last_name, nickname, phone_number, darkest_secret))
	{
		this->add_contact(first_name, last_name, nickname, phone_number, darkest_secret);
	}
	else
	{
		std::cout << "Invalid contact" << std::endl;
	}

}

int	PhoneBook::contact_valididy(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret)
{
	if (first_name.length() == 0 || last_name.length() == 0 || nickname.length() == 0 || phone_number.length() == 0 || darkest_secret.length() == 0)
		return (0);
	return (1);
}

int	PhoneBook::search_contact(void)
{
	int		i = 0;
	int		index;
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;

	std::cout << "|";
	std::cout << std::string(IDX) << std::setw((10 - std::string(IDX).size()) + 1) << "|";
	std::cout << std::setw(10) << std::string(FN) << std::setw((10 - std::string(FN).size())) << "|";
	std::cout << std::setw(10) << std::string(LN) << std::setw((10 - std::string(LN).size())) << "|";
	std::cout << std::setw(10) << std::string(NICK) << std::setw((10 - std::string(NICK).size())) << "|" << std::endl;

	while (i < 8)
	{
		if (this->_contacts[i].get_index() != -1)
		{
			index = this->_contacts[i].get_index();
			first_name = this->_contacts[i].get_first_name();
			last_name = this->_contacts[i].get_last_name();
			nickname = this->_contacts[i].get_nickname();

			std::cout << "|";
			std::cout << std::right << std::setw(10) << index + 1 << "|";
			std::cout << std::right << std::setw(10) << ft_truncate(first_name, 10) << "|";
			std::cout << std::right << std::setw(10) << ft_truncate(last_name, 10) << "|";
			std::cout << std::right << std::setw(10) << ft_truncate(nickname, 10) << "|" << std::endl;
		}
		i++;
	}
	return (0);
}

int	PhoneBook::print_contact(void)
{
	std::string input;
	int			index;

	if (this->_contacts[0].get_index() < 0)
	{
		std::cout << "No contacts to print" << std::endl;
		return (0);
	}
	while (1)
	{
		system("clear");
		this->search_contact();
		std::cout << "Enter the contact index to print detail" << std::endl;
		std::cout << "Or Enter 0 to exit: ";
		getline(std::cin, input);
		if (input == "0")
			return (0);
		try {
			index = std::stoi(input);
		}
		catch (std::exception &e) {
			continue ;
		}
		if (index < 0 || index > 8)
			continue ;
		if (this->_contacts[index - 1].get_index() == -1)
			continue ;
		else
		{
			this->_contacts[index - 1].print_contact();
			return (0);
		}
		input.clear();
	}
}

int		PhoneBook::_index = 0;
