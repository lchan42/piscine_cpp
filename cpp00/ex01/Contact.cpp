/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 19:59:48 by lchan             #+#    #+#             */
/*   Updated: 2022/09/13 18:59:49 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact (void) {
	std::cout << "constructor Contact Called" << std::endl;
}

void	Contact::printPrompt(int i) const {

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

void	Contact::printLine(int limit) {

	for (int i = 0; i < limit - 1; i++)
	{
		if (info[i].length() <= 10)
		{
			std::cout
			<< std::right
			<< std::setw(10)
			<< this->getInfo(i)
			<< "|";
		}
		else
		{
			std::cout
			<< this->getInfo(i).substr(0, 9)
			<< "."
			<< "|";
		}
	}
	std::cout << "\n";
}

const std::string	&Contact:: getInfo(int line) const {
	return (this->info[line]);
};

Contact::~Contact() {
	std::cout << "destructor Contact Called" << std::endl;
}



