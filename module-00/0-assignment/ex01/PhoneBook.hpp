/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:03:43 by nnakarac          #+#    #+#             */
/*   Updated: 2023/02/16 15:06:15 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <iomanip>
# include <string>
# include "Contact.hpp"

class PhoneBook
{
private:
	/* data */
	Contact		_contacts[8];
	static int	_index;
public:
	PhoneBook(void);
	~PhoneBook(void);

	int		add_contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret);
	void	add_contact_prompt(void);
	int		contact_valididy(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret);
	Contact	get_index(int index);
	int		search_contact(void);
	int		print_contact(void);
};

#endif
