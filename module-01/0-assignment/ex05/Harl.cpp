/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 14:41:16 by nnakarac          #+#    #+#             */
/*   Updated: 2023/02/19 16:08:01 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


Harl::Harl(std::string level): _level(level)
{
	return ;
}

Harl::~Harl(void)
{
	return ;
}

void	Harl::complain()
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	void (Harl::*output[5])(void) = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error, &Harl::_other};

	int	size = (int) levels->length();
	int	out = (int) size - 2;
	while (std::strcmp(this->_level.c_str(), levels[out].c_str()) != 0 && out >=0)
	{
		out--;
	}
	out = out >= 0 ? out : 4;
	(this->*output[out])();
}

void	Harl::_debug(void)
{
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::_info(void)
{
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::_warning(void)
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::_error(void)
{
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::_other(void)
{
	std::cerr << "[Harl says something]" << std::endl;
	std::cerr << this->_level << std::endl;
}
