/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 20:05:00 by lchan             #+#    #+#             */
/*   Updated: 2022/09/14 19:59:23 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : index(0) {

	//std::cout << "constructeur PhoneBook called" <<std::endl;
}

void	PhoneBook::addContact() {

	this->contactTab[this->index].addLine();
	if (this->index + 1 < PHBOOK_SIZE)
		this->index++;
	else
		this->index = 0;
}

void	PhoneBook::printTabHeader(){

	std::string a[INFO_NBR] = { INDEX, FIRST, LAST, NICK, PHONE};

	for (int i = 0; i < INFO_NBR; i++)
		std::cout << std::right << std::setw(10) << a[i] << "|";
	std::cout << "\n";
}

void	PhoneBook::printAllContact() {

	this->printTabHeader();
	for (int i = 0; i < PHBOOK_SIZE; i++)
	{
		std::cout << std::right << std::setw(10) << i + 1 << "|";
		this->contactTab[i].printLine(INFO_NBR);
	}
}

//void	PhoneBook::

void	PhoneBook::printOneContact(){

	int	i = -1;

	this->printAllContact();
	while (!(i >= 1 && i <= 8))
	{
		this->stream.clear();
		std::cout << SCH_MSG;
		if (std::getline (std::cin, this->input) && std::cin.eof())
			return ;
		//std::cout << "this stream = " << this->stream.str() << "\n";
		this->stream << input;
		//std::cout << "input = " << this->input << "\n";
		this->stream >> i;
		//std::cout << this->stream.good() << std::endl;
		// std::cout << this->stream.bad() << std::endl;
		// std::cout << this->stream.fail() << std::endl;
		// std::cout << "i = " << i << "\n";
		if (i > 0 && i <= 8)
			this->contactTab[i - 1].printAllInfo();
		else
			std::cout << ERR_SCH;
	}
}

void	PhoneBook::usrImput() {

	while (1)
	{
		std::cout << "Input : ";
		std::getline (std::cin, this->input);
		if (this->input == "EXIT" || std::cin.eof())
			return ;
		else if (this->input == "ADD" )
			this->addContact();
		else if (this->input == "SEARCH")
			this->printOneContact();
		else
			std::cout << ERR_MSG;
	}
}

PhoneBook::~PhoneBook(){

	//std::cout << "destructor PhoneBook called" <<std::endl;
}
