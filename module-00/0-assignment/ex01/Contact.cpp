/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:05:43 by nnakarac          #+#    #+#             */
/*   Updated: 2023/02/16 15:03:00 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	this->clean_contact();
	// std::cout << "Contact created" << std::endl;
}

Contact::~Contact()
{
	// std::cout << "Contact deleting: " << this->_first_name << std::endl;
	this->clean_contact();
}

void	Contact::clean_contact(void)
{
	this->_first_name = "";
	this->_last_name = "";
	this->_nickname = "";
	this->_phone_number = "";
	this->_darkest_secret = "";
	this->_index = -1;
}

void	Contact::print_contact(void)
{
	std::cout << std::right << std::setw(16) << "First name: " << this->_first_name << std::endl;
	std::cout << std::right << std::setw(16) << "Last name: " << this->_last_name << std::endl;
	std::cout << std::right << std::setw(16) << "Nickname: " << this->_nickname << std::endl;
	std::cout << std::right << std::setw(16) << "Phone number: " << this->_phone_number << std::endl;
	std::cout << std::right << std::setw(16) << "Darkest secret: " << this->_darkest_secret << std::endl;
}

int		Contact::set_first_name(std::string first_name)
{
	this->_first_name = first_name;
	return (0);
}

int		Contact::set_last_name(std::string last_name)
{
	this->_last_name = last_name;
	return (0);
}

int		Contact::set_nickname(std::string nickname)
{
	this->_nickname = nickname;
	return (0);
}

int		Contact::set_phone_number(std::string phone_number)
{
	this->_phone_number = phone_number;
	return (0);
}

int		Contact::set_secret(std::string darkest_secret)
{
	this->_darkest_secret = darkest_secret;
	return (0);
}

int		Contact::set_index(int index)
{
	this->_index = index;
	return (0);
}

std::string	Contact::get_first_name(void)
{
	return (this->_first_name);
}

std::string	Contact::get_last_name(void)
{
	return (this->_last_name);
}

std::string	Contact::get_nickname(void)
{
	return (this->_nickname);
}

std::string	Contact::get_phone_number(void)
{
	return (this->_phone_number);
}

std::string	Contact::get_secret(void)
{
	return (this->_darkest_secret);
}

int		Contact::get_index(void)
{
	return (this->_index);
}
