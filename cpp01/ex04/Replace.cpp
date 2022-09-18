/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 15:37:27 by lchan             #+#    #+#             */
/*   Updated: 2022/09/18 16:49:01 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(std::string f, std::string s1, std::string s2)
		: f(f), s1(s1), s2(s2){

}

bool	Replace::checkIfstream(std::ifstream &ifs){

	if (!ifs)
	{
		std::cerr << "fail to open infile\n" << std::endl;
		return (-1);
	}
	return (0);
}

bool	Replace::checkOfstream(std::ifstream &ifs, std::ofstream &ofs){
	
	if (!ofs)
	{
		std::cerr << "fail to creat outfile\n" << std::endl;
		ifs.close();
		return (-1);
	}
	return (0);
}

const std::string	Replace::addReplaceToNAme(std::string name){

	return (name + ".replace");
}

void	Replace::fillOfs(std::ifstream &ifs, std::ofstream &ofs){

	std::string	line;
	std::size_t	s1Len = this->s1.length();
	std::size_t	s2Len = this->s2.length();

	while (!std::getline(ifs, line).eof())
	{
		std::size_t pos = line.find(s1);
		while (pos != std::string::npos)
		{
			line.erase (pos, s1Len);
			line.insert (pos, s2);
			pos = line.find(s1, pos + s2Len);
		}
		ofs << line << std::endl;
	}
	ofs << line;
}

void	Replace::creatReplace(){

	std::ifstream	ifs(f.c_str());

	if (this->checkIfstream(ifs))
		return ;
	std::ofstream	ofs(this->addReplaceToNAme(this->f).c_str());
	if (this->checkIfstream(ifs))
		return ;
	this->fillOfs(ifs, ofs);
	ofs.close();
	ifs.close();
}

Replace::~Replace(void){

	std::cout << "destuctor called" << std::endl;
}
