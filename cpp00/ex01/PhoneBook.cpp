/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 20:05:00 by lchan             #+#    #+#             */
/*   Updated: 2022/09/13 18:35:25 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){

	std::cout << "constructeur PhoneBook called" <<std::endl;
	PhoneBook::index = 0;
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
		this->contactTab[i].printLine();
}

PhoneBook::~PhoneBook(){

	std::cout << "destructor PhoneBook called" <<std::endl;
}
