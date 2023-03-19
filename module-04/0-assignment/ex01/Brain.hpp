/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 00:15:09 by nnakarac          #+#    #+#             */
/*   Updated: 2023/03/19 07:33:00 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_HPP__
# define __BRAIN_HPP__

# include <iostream>

class Brain
{
	private:
		std::string	__ideas[100];
	public:
		Brain();
		Brain(const Brain & ref);
		Brain & operator=(Brain const & rhs);

		~Brain();
};

#endif
