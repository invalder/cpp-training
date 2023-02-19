/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 09:19:52 by nnakarac          #+#    #+#             */
/*   Updated: 2023/02/19 14:41:39 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

# include <iostream>
# include <string>
# include <fstream>
# include <sstream>
# include <stdexcept>

class	Sed{
	private:
		std::string	_infile;
		std::string	_outfile;
		std::string	_find;
		std::string	_replace;
		std::ifstream	_src_ifs;
		std::ofstream	_dst_ofs;
	public:
		Sed(std::string infile, std::string find, std::string replace);
		~Sed();

		int count_words(std::ifstream& iss);
		int	readLineWriteNew(void);
};


#endif
