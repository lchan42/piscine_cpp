/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 16:07:47 by lchan             #+#    #+#             */
/*   Updated: 2022/09/17 16:15:24 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

int main (void){
	std::string s = "HI THIS IS BRAIN";

	std::string	*stringPTR = &s;
	std::string	&stringREF = s;

	std::cout << "address of s = " << &s << std::endl;
	std::cout << "address stocked in stringPTR = " << stringPTR << std::endl;
	std::cout << "address stocked in stringREF = " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "value of s = " << s << std::endl;
	std::cout << "value pointed by stringPTR = " << *stringPTR << std::endl;
	std::cout << "value pointed by stringREF = " << stringREF << std::endl;
}
