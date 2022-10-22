/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:53:41 by lchan             #+#    #+#             */
/*   Updated: 2022/10/22 14:26:51 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"


int	main(void)
{
	Array<int>			intArray(6);
	Array<std::string>	stringArray(6);
	Array<std::string>	stringArray2;

	stringArray[0] = "Hi";
	stringArray[1] = "Hello";
	stringArray[2] = "How are you?";
	stringArray[3] = "Fine and you?";
	stringArray[4] = "Doing great thanks!";
	stringArray[5] = "You're very welcome";

	intArray[0] = 42;
	intArray[1] = 422;
	intArray[2] = 4222;
	intArray[3] = 42222;
	intArray[4] = 422222;
	intArray[5] = 4222222;


	for(int i = 0; i < 10; i++)
	{
		try {
			std::cout << "stringArray[" << i << "] = "<< stringArray[i] << std::endl;

		}
		catch (std::exception & e){
			std::cout << e.what() << std::endl;
		}
	}

	stringArray2 = stringArray;
	for(int i = 0; i < 10; i++)
	{
		try {
			std::cout << "stringArray2[" << i << "] = "<< stringArray2[i] << std::endl;
		}
		catch (std::exception & e){
			std::cout << e.what() << std::endl;
		}
	}

	for(int i = 0; i < 10; i++)
	{
		try {
			std::cout << "intArray[" << i << "] = "<< intArray[i] << std::endl;

		}
		catch (std::exception & e){
			std::cout << e.what() << std::endl;
		}
	}
	//stringArray = intArray; not accepted by compiler
}







// int	main( void )
// {
// 	Array<int>			intArray;
// 	Array<std::string>	stringArray(10);
// 	Array<std::string>	otherStringArray;

// 	stringArray[0] = "Hi";
// 	stringArray[1] = "Hello";
// 	stringArray[2] = "How are you?";
// 	stringArray[3] = "Fine and you?";
// 	stringArray[4] = "Doing great thanks!";
// 	stringArray[5] = "You're very welcome";
// 	std::cout << "intArray.size() = " << intArray.size() << std::endl;
// 	std::cout << "stringArray.size() = " << stringArray.size() << std::endl;
// 	otherStringArray = stringArray;
// 	otherStringArray[3] = "I'm good, how about you?";

// 	try
// 	{
// 		std::cout << stringArray[59] << std::endl;
// 	}
// 	catch (std::exception &e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}

// 	try
// 	{
// 		std::cout << stringArray[-3] << std::endl;
// 	}
// 	catch (std::exception &e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}

// 	return 0;
// }
