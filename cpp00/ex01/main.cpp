/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 20:09:13 by lchan             #+#    #+#             */
/*   Updated: 2022/09/13 18:36:02 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void){

	PhoneBook	carnet;
	carnet.addContact();
	carnet.addContact();
	carnet.printAllContact();
}
