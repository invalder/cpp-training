/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:05:51 by nnakarac          #+#    #+#             */
/*   Updated: 2023/02/16 15:01:56 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <iomanip>
# include <string>
# include <string>

class Contact
{
private:
	/* data */
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_darkest_secret;
	int			_index;

public:
	Contact();
	~Contact();

	int			set_first_name(std::string first_name);
	int			set_last_name(std::string last_name);
	int			set_nickname(std::string nickname);
	int			set_phone_number(std::string phone_number);
	int			set_secret(std::string darkest_secret);
	int			set_index(int index);

	std::string	get_first_name(void);
	std::string	get_last_name(void);
	std::string	get_nickname(void);
	std::string	get_phone_number(void);
	std::string	get_secret(void);
	int			get_index(void);

	void		print_contact(void);
	void		clean_contact(void);
};

#endif
