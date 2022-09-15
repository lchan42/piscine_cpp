/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 20:05:00 by lchan             #+#    #+#             */
/*   Updated: 2022/09/15 17:28:24 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : index(0) {

	//std::cout << "constructeur PhoneBook called" <<std::endl;
}

void	PhoneBook::_add() {

	this->contactTab[this->index].addLine();
	if (this->index + 1 < PHBOOK_SIZE)
		this->index++;
	else
		this->index = 0;
}

void	PhoneBook::_printTabHeader(){

	std::string a[INFO_NBR] = { INDEX, FIRST, LAST, NICK, PHONE};

	for (int i = 0; i < INFO_NBR; i++)
		std::cout << std::right << std::setw(10) << a[i] << "|";
	std::cout << "\n";
}

void	PhoneBook::_printAllContact() {

	this->_printTabHeader();
	for (int i = 0; i < PHBOOK_SIZE; i++)
	{
		std::cout << std::right << std::setw(10) << i + 1 << "|";
		this->contactTab[i].printTabLine(INFO_NBR);
	}
	std::cout << std::endl;
}

int		PhoneBook:: _convstoi(std::string input){

	std::stringstream	stream;
	int					i;

	i = 0;
	stream << input;
	stream >> i;
	return (i);
}

void	PhoneBook::_search(){

	int	i = -1;

	this->_printAllContact();
	while (!(i >= 1 && i <= 8))
	{
		std::cout << SCH_MSG;
		if (!(std::getline(std::cin, this->input).good()))
		{
			std::cout << std::endl;
			return ;
		}
		i = _convstoi(this->input);
		if (i > 0 && i <= 8)
			this->contactTab[i - 1].printContact();
		else
			std::cout << ERR_SCH;
	}
}

void	PhoneBook::usrImput() {

	while (!std::cin.eof())
	{
		std::cout << DFL_MSG;
		if (!std::getline (std::cin, this->input).good()
		|| this->input == "EXIT")
			break ;
		else if (this->input == "ADD" )
			this->_add();
		else if (this->input == "SEARCH")
			this->_search();
		else
			std::cout << ERR_MSG;
	}
}

PhoneBook::~PhoneBook(){

	//std::cout << "destructor PhoneBook called" <<std::endl;
}
