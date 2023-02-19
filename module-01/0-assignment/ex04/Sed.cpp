/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 09:23:28 by nnakarac          #+#    #+#             */
/*   Updated: 2023/02/19 11:45:40 by nnakarac         ###   ########.fr       */
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
		if (this->_src_ifs)
			this->_src_ifs.close();
		if (this->_dst_ofs)
			this->_dst_ofs.close();
		this->_infile.clear();
		this->_outfile.clear();
		this->_find.clear();
		this->_replace.clear();
		throw std::runtime_error("File doesn't exist or Access Denied!!");
	}
	this->readLineWriteNew();
}

Sed::~Sed()
{
	std::clog << "Decon" << std::endl;

	if (this->_src_ifs)
		this->_src_ifs.close();
	if (this->_dst_ofs)
		this->_dst_ofs.close();
	this->_infile.clear();
	this->_outfile.clear();
	this->_find.clear();
	this->_replace.clear();
}

int Sed::readLineWriteNew(void)
{
	std::string contents;

	if (this->_src_ifs)
		std::getline(this->_src_ifs, contents, '\0');
	else
		std::cerr << "Error: can not Open file" << std::endl;

	std::cout << "Contents of file: " << std::endl << contents << std::endl;

	size_t pos = contents.find(this->_find);


	std::cout << "finding: " << this->_find << " and replace with: " << this->_replace << std::endl;
	// user erase and insert what to replace
	while (pos != std::string::npos && this->_find.length() > 0 && this->_replace.length() > 0)
	{
		contents.erase(pos, this->_find.length());
		contents.insert(pos, this->_replace);
		pos = contents.find(this->_find, pos + this->_find.length());
	}

	std::cout << "New Contents: " << std::endl << contents << std::endl;

	this->_dst_ofs.open(this->_outfile);

	this->_dst_ofs << contents;

	this->_src_ifs.clear();
	this->_src_ifs.seekg(0);
	return (0);
}
