/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:42:33 by lchan             #+#    #+#             */
/*   Updated: 2022/10/03 14:32:14 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <new>
# define TABSIZE 100

void	deleteAnimalArray(Animal** tab, int arraySize){
	for(int i = 0; i < arraySize; i++)
		delete tab[i];
}

void	testAnimalTab(){
	Animal	*tab[TABSIZE];
	int		halfSize = TABSIZE / 2;

	std::cout << " \n>>>>>>>>>>> testing Animal tab[100] <<<<<<<<<<<<" << std::endl;

	for (int i = 0; i < halfSize; i++)
	{
		std::cout << i << std::endl;
		tab[i] = new Dog;
		tab[i + halfSize] = new Cat;

	}
	deleteAnimalArray(tab, TABSIZE);
}

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
	Animal*	d7 = new Dog();
	Dog d8;


	//std::cout << " address d6 = " << (*d6).getBrain() << "address c6 =" << c6 << std::endl;
	//	*d6 = *d7;
	//d6->Brain::getAddress() ;
	std::cout << "address d6 brain = " <<((Dog*)d6)->getBrain() << "\naddress d6 brain = " << ((Dog*)d6)->getBrain()->getAddress()<< std::endl;

	delete d6;
	delete d7;
	//testAnimalTab();
	std::cout << " \n>>>>>>>>>>> destructor called <<<<<<<<<<<<" << std::endl;

}

