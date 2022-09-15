/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 19:59:48 by lchan             #+#    #+#             */
/*   Updated: 2022/09/15 17:31:38 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact (void) {
	//std::cout << "constructor Contact Called" << std::endl;
}

void	Contact::_printPrompt(int i) const {

	std::string a[5] = { FIRST, LAST, NICK, PHONE, SECRET};
	std::cout << (a[i] + " : ");
};

void	Contact::_emptyContact(){
	for (int i = 0; i < INFO_NBR; i++)
		this->info[i].clear();
}

void	Contact::addLine() {

	this->_emptyContact();
	for (int i = 0; i < INFO_NBR; i++)
	{
		while (this->info[i].empty())
		{
			this->_printPrompt(i);
			if (!std::getline (std::cin, this->info[i]).good())
				return ;
		}
	}
};

void	Contact::printTabLine(int limit) const {

	for (int i = 0; i < limit - 1; i++)
	{
		if (info[i].length() <= 10)
			std::cout << std::right << std::setw(10) << this->getInfo(i) << "|";
		else
			std::cout << this->getInfo(i).substr(0, 9) << ".|";
	}
	std::cout << std::endl;
}

void	Contact::printContact() const {
	if (! this->getInfo(0).empty())
	{
		for (int i = 0; i < INFO_NBR; i++)
		{
			this->_printPrompt(i);
			std::cout << getInfo(i) << "\n";
		}
	}
	else
		std::cout << EMPTY_MSG;
	std::cout << std::endl;
}

const std::string	&Contact:: getInfo(int line) const {
	return (this->info[line]);
};

Contact::~Contact() {
	//std::cout << "destructor Contact Called" << std::endl;
}



