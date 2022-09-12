/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 20:05:00 by lchan             #+#    #+#             */
/*   Updated: 2022/09/12 20:18:13 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void){
	std::cout << "constructeur PhoneBook called" <<std::endl;
	PhoneBook::index = 0;
	memset(arr, 0, sizeof(arr));
}

PhoneBook::~PhoneBook(void){
	std::cout << "destructor PhoneBook called" <<std::endl;
}

