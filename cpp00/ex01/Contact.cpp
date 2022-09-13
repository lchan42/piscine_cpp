/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 19:59:48 by lchan             #+#    #+#             */
/*   Updated: 2022/09/13 18:37:04 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact (void) {
	std::cout << "constructor Contact Called" << std::endl;
}

void	Contact::printPrompt(int i) const {

	//const char* a[6] = { FIRST, LAST, NICK, PHONE, SECRET, NULL};
	std::string a[5] = { FIRST, LAST, NICK, PHONE, SECRET};
	std::cout << (a[i] + " : ");
};

void	Contact::addLine() {

	for (int i = 0 ; i < INFO_NBR ; i++)
	{
		this->printPrompt(i);
		std::getline (std::cin, this->info[i]);
 		if(!std::cin)
		{
			if(std::cin.eof())
				{
					std::cout << "\n";
					return ;
				}
			else
				std::cout << "other failure\n";
		}
	}
};

void	Contact::printLine() {

	for (int i = 0; i < INFO_NBR; i++)
	{
		std::cout
		<< std::right
		<< std::setw(10)
		<< this->getInfo(i)
		<< "|";
	}
	std::cout << "\n";
}

const std::string	&Contact:: getInfo(int line) const {
	return (this->info[line]);
};

Contact::~Contact() {
	std::cout << "destructor Contact Called" << std::endl;
}



