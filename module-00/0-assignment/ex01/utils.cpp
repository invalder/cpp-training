/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:42:10 by nnakarac          #+#    #+#             */
/*   Updated: 2023/02/16 15:48:12 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

std::string ft_truncate(std::string str, size_t width, bool show_ellipsis)
{
    if (str.length() > width)
	{
        if (show_ellipsis)
            return str.substr(0, width - 1) + ".";
        else
            return str.substr(0, width);
	}
    return str;
}

std::string		str_toupper(std::string str)
{
	for (unsigned long i = 0; i < str.length(); i++)
		str[i] = toupper(str[i]);
	return (str);
}
