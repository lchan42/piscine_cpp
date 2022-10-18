/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 18:16:05 by lchan             #+#    #+#             */
/*   Updated: 2022/10/18 14:38:29 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.hpp"
//#include <cstdint>
#include <stdint.h>

uintptr_t serialize(Data* ptr){
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw){
	return (reinterpret_cast<Data*>(raw));
}

int	main(){

	Data d;
	uintptr_t u_int = serialize(&d);

	//deserialize(serialize(&d));
	std::cout << "address of d = " << &d << std::endl;
	std::cout << "address of d = " << u_int << std::endl;
	std::cout << "deserialize = " << deserialize(u_int) << std::endl;
	std::cout << "&d == deserialize(u_int)) ? " <<((&d == deserialize(u_int)) ? ">>>>>>>> YES <<<<<<<<<" : "NO :( .......") << std::endl;
}
