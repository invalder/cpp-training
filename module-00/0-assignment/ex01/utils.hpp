/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:42:48 by nnakarac          #+#    #+#             */
/*   Updated: 2023/02/16 15:48:18 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

# include <string>

# define IDX "index"
# define FN "first name"
# define LN "last name"
# define NICK "nickname"

std::string 	ft_truncate(std::string str, size_t width, bool show_ellipsis = true);
std::string		str_toupper(std::string str);

#endif
