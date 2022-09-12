/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 19:59:48 by lchan             #+#    #+#             */
/*   Updated: 2022/09/12 20:06:25 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact (void) {
	std::cout << "constructor Contact Called" << std::endl;
	Contact::_first_name = NULL;
	Contact::_last_name = NULL;
	Contact::_nickname = NULL;
	Contact::_phone_number = NULL;
	Contact::_darkest_secret = NULL;
}

Contact::~Contact (void) {
	std::cout << "destructor Contact Called" << std::endl;
}
