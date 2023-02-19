/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 09:23:28 by nnakarac          #+#    #+#             */
/*   Updated: 2023/02/19 10:46:27 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int Sed::count_words(std::ifstream& iss) {
	int count = 0;
	std::string word;
	while (iss >> word) {
		++count;
	}
	iss.clear();  // clear the EOF flag
	iss.seekg(0); // move the file pointer to the beginning of the file

	return count;
}

Sed::Sed(std::string infile,
	std::string find,
	std::string replace):
	_infile(infile),
	_outfile(infile + ".replace"),
	_find(find),
	_replace(replace)
{
	this->_src_ifs.open(this->_infile);
	if (!this->_src_ifs)
	{
		throw std::runtime_error("File doesn't exist or Access Denied!!");
	}
	this->_find.clear();
	this->_replace.clear();
	this->_original = NULL;
	this->_final = NULL;
	this->readLineWriteNew();
	// this->setOriginalString();
	// this->setReplaceString();

}

Sed::~Sed()
{
	if (this->_src_ifs)
		this->_src_ifs.close();
	if (this->_dst_ofs)
		this->_dst_ofs.close();
	this->_find.clear();
	this->_replace.clear();
	if (this->_original)
	{
		delete[] this->_original;
		this->_original = NULL;
	}
	if (this->_final)
	{
		delete[] this->_final;
		this->_final = NULL;
	}
}

int	Sed::setOriginalString(void)
{
	// int	wc = this->count_words(this->_src_ifs);
	// this->_original = new std::string[wc];

	// for(int i = 0; i < wc ; i++)
	// {
	// 	this->_src_ifs >> this->_original[i];
	// 	std::cout << "debug: " << this->_original[i] << std::endl;
	// }
	// this->_original = this
	return (0);
}

int Sed::readLineWriteNew(void)
{
	std::string contents;

	if (this->_src_ifs)
		std::getline(this->_src_ifs, contents, '\0');
	else
		std::cerr << "Error: can not Open file" << std::endl;

	std::cout << "Contents of file: " << std::endl << contents << std::endl;

	this->_src_ifs.clear();
	this->_src_ifs.seekg(0);
	return (0);
}
