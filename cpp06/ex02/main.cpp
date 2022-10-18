/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:42:27 by lchan             #+#    #+#             */
/*   Updated: 2022/10/18 17:12:53 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <iostream>
#include <cstdlib>
#include <exception>
#include <typeinfo>

Base* generate(void){

	int		rdn;

	srand (time(NULL));
	rdn = rand() % 100;
	std::cout << rdn << std::endl;
	if (rdn < 33)
	{
		std::cout << "generated a A pointer" << std::endl;
		return (new A);
	}
	else if (rdn < 66)
	{
		std::cout << "generated a B pointer" << std::endl;
		return (new B);
	}
	else
	{
		std::cout << "generated a C pointer" << std::endl;
		return (new C);
	}
}

void identify(Base* p){

	A *child_a = dynamic_cast<A*>(p);
	B *child_b = dynamic_cast<B*>(p);
	C *child_c = dynamic_cast<C*>(p);

	if (child_a)
		std::cout << "A" << std::endl;
	else if (child_b)
		std::cout << "B" << std::endl;
	else if (child_c)
		std::cout << "C" << std::endl;
	else
		std::cout << "none of the 3 class" << std::endl;
}

void identify(Base& p){

	try {
		A &child_a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return ;
	}
	catch(std::bad_cast &bc){}
	try {
		B &child_b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return ;
	}
	catch(std::bad_cast &bc){}
	try {
		C &child_c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		return ;
	}
	catch(std::bad_cast &bc){}
}

int main (){
	Base *	test = generate();
	A test_a;
	B test_b;
	C test_c;
	Base & test_ref_a = test_a;
	Base & test_ref_b = test_b;
	Base & test_ref_c = test_c;

	identify(test);
	identify(test_ref_a);
	identify(test_ref_b);
	identify(test_ref_c);
}
