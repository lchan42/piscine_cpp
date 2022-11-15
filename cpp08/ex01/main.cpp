/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:39:03 by lchan             #+#    #+#             */
/*   Updated: 2022/11/15 15:13:39 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>

int i = 0;

unsigned int randomNumber()
{
	return (rand() % 100);
}

void	testShortestSpan(Span &s1){

	std::cout << "\n>>>>>>>>>> starting shortestSpan test <<<<<<<<<<" << std::endl;
	try {
		std::cout << "shortestSpan = " << s1.shortestSpan() << std::endl;
	}
	catch (std::exception &e){
		std::cout	<< "shortestSpan exception caught: "
					<< e.what()
					<< std::endl;
		s1.displayLst();
	}
	std::cout << ">>>>>>>>>> ending shortestSpan test <<<<<<<<<<\n" << std::endl;
}

void	testLongestSpan(Span &s1){

	std::cout << "\n>>>>>>>>>> starting longestSpan test <<<<<<<<<<" << std::endl;
	try {
			std::cout << "longestSpan = " << s1.longestSpan() << std::endl;
	}
	catch (std::exception &e){
		std::cout	<< "longestSpan exception caught: "
					<< e.what()
					<< std::endl;
		s1.displayLst();
	}
	std::cout << ">>>>>>>>>> ending longestSpan test <<<<<<<<<<\n" << std::endl;
}
void	testaddNumber(Span &s1)
{
	std::cout << "\n>>>>>>>>>> starting addNumber test <<<<<<<<<<" << std::endl;
	unsigned int	rdn;
	srand((unsigned) time(NULL));

	for (int i = 0; i < 15; i++)
	{
		try{
			rdn = randomNumber();
			s1.addNumber(rdn);
		}
		catch (std::exception &e){
			std::cout	<< rdn
						<< " hasnt been add into Span : "
						<< e.what()
						<< std::endl;
		}
	}
	s1.displayLst();
	std::cout << ">>>>>>>>>> ending addNumber test <<<<<<<<<<\n" << std::endl;
}

int main(void){
	Span s1(10);
	Span s2(10);

	s1.addNumber(42);
	testShortestSpan(s1);
	testaddNumber(s1);
	testLongestSpan(s1);
	testShortestSpan(s2);


	std::list<int> s3;
	
	for (int i = 0; i < 10; i++)
		s3.push_back(i);
	s2.addNumber(s3.begin(), s3.end());
	s2.displayLst();
	s2.addNumber(s3.begin(), s3.end());
	s2.displayLst();
}

