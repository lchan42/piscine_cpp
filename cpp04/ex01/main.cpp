/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:42:33 by lchan             #+#    #+#             */
/*   Updated: 2022/10/01 19:22:11 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <new>

int	main( void ){

	std::cout << " \n>>>>>>>>>>> testing Animal functions <<<<<<<<<<<<" << std::endl;
	Animal a1;
	Animal b1 = a1;
	a1.setType("RandomType");
	std::cout << "The Type of a1 is: " << a1.getType() << std::endl;
	std::cout << "The Type of b1 is: " << b1.getType() << std::endl;
	a1.makeSound();
	std::cout << " \n>>>>>>>>>>> testing Animal operator= <<<<<<<<<<<<" << std::endl;
	std::cout << "The Type of a1 is: " << a1.getType() << std::endl;
	std::cout << "The Type of b1 is: " << b1.getType() << std::endl;
	b1 = a1;
	std::cout << "b1 = a1\n" << "b1 type is : " << b1.getType() << std::endl;
	std::cout << " \n>>>>>>>>>>> testing new Cat <<<<<<<<<<<<" << std::endl;
	Animal *b3 = new Cat();
	std::cout << "type is : " << b3->getType() << std::endl;
	b3->makeSound();
	delete b3;
	std::cout << " \n>>>>>>>>>>> testing new Dog <<<<<<<<<<<<" << std::endl;
	Animal*	d1 = new Dog();
	std::cout << "type is : " << d1->getType() << std::endl;
	d1->makeSound();
	delete d1;
	std::cout << " \n>>>>>>>>>>> testing new Dog <<<<<<<<<<<<" << std::endl;


	Animal*	d6 = new Dog();
	Animal*	c6 = new Cat();
	//std::cout << d6 << c6 << std::endl;
		*d6 = *c6;

	delete d6;
	delete c6;
	std::cout << " \n>>>>>>>>>>> destructor called <<<<<<<<<<<<" << std::endl;

}

