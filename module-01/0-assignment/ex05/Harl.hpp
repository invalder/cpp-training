/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 14:41:10 by nnakarac          #+#    #+#             */
/*   Updated: 2023/02/19 15:25:05 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{
	private:
		void		_debug(void);
		void		_info(void);
		void		_warning(void);
		void		_error(void);
		void		_other(void);
		std::string	_level;

	public:
		Harl(std::string level);
		~Harl(void);

		void	complain();
};

#endif
