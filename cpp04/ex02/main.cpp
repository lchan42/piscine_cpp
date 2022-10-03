/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:42:33 by lchan             #+#    #+#             */
/*   Updated: 2022/10/03 17:05:43 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <new>
# define TABSIZE 100

void	testDogOperator()
{
	std::cout << " \n>>>>>>>>>>> testing Dog operator= <<<<<<<<<<<<" << std::endl;

	Animal*	d6 = new Dog();
	Animal*	d7 = new Dog();

	std::cout << "address d6 brain = " <<((Dog*)d6)->getBrain() << std::endl;
	std::cout << "address d7 brain = " <<((Dog*)d7)->getBrain()<< std::endl;
	for (int i = 0; i < 5; i++)
		((Dog*)(d6))->getBrain()->setIdeas("EAT");
	for (int i = 5; i < 10; i++)
		((Dog*)(d6))->getBrain()->setIdeas("PLAY");
	std::cout << "d6 "; ((Dog*)(d6))->getBrain()->getAllIdeas();
	(*((Dog*)(d7))) = (*((Dog*)(d6)));
	std::cout << "d7 "; ((Dog*)(d7))->getBrain()->getAllIdeas();
	std::cout << "address d6 brain = " <<((Dog*)d6)->getBrain() << std::endl;
	std::cout << "address d7 brain = " <<((Dog*)d7)->getBrain()<< std::endl;
	delete d6;
	delete d7;
}

void	testCatOperator()
{
	std::cout << " \n>>>>>>>>>>> testing Cat operator= <<<<<<<<<<<<" << std::endl;

	Animal*	c6 = new Cat();
	Animal*	c7 = new Cat();

	std::cout << "address c6 brain = " <<((Cat*)c6)->getBrain() << std::endl;
	std::cout << "address c7 brain = " <<((Cat*)c7)->getBrain()<< std::endl;
	for (int i = 0; i < 5; i++)
		((Cat*)(c6))->getBrain()->setIdeas("Be annoying during the night");
	for (int i = 5; i < 10; i++)
		((Cat*)(c6))->getBrain()->setIdeas("Ignore owners' existance");
	std::cout << "c6 "; ((Cat*)(c6))->getBrain()->getAllIdeas();
	(*((Cat*)(c7))) = (*((Cat*)(c6)));
	std::cout << "c7 "; ((Cat*)(c7))->getBrain()->getAllIdeas();
	std::cout << "address c6 brain = " <<((Cat*)c6)->getBrain() << std::endl;
	std::cout << "address c7 brain = " <<((Cat*)c7)->getBrain()<< std::endl;
	delete c6;
	delete c7;
}

void	deleteAnimalArray(Animal** tab, int arraySize)
{
	for(int i = 0; i < arraySize; i++)
		delete tab[i];
}

void	testAnimalTab()
{
	std::cout << " \n>>>>>>>>>>> testing Animal tab[100] <<<<<<<<<<<<" << std::endl;

	Animal*	tab[TABSIZE];
	int		halfSize = TABSIZE / 2;

	for (int i = 0; i < halfSize; i++)
	{
		std::cout << i << std::endl;
		tab[i] = new Dog;
		tab[i + halfSize] = new Cat;
		((Dog*)(tab[i]))->getBrain()->setIdeas("I wanna eat, reproduce and play");
		((Dog*)(tab[i + halfSize]))->getBrain()->setIdeas("I 'm just a cat");
	}
	((Dog*)(tab[0]))->getBrain()->getAllIdeas();
	tab[0]->makeSound();
	((Dog*)(tab[0]))->getBrain()->setIdeas("If only I could eat a the table .... ");
	*((Dog*)tab[1]) = *((Dog*)tab[0]);
	//std::cout << "oups segfault" << std::endl;
	((Dog*)(tab[1]))->getBrain()->getAllIdeas();
	((Cat*)(tab[50]))->getBrain()->getAllIdeas();
	tab[50]->makeSound();

	deleteAnimalArray(tab, TABSIZE);
}


int	main( void )
{
	testDogOperator();
	testCatOperator();
	testAnimalTab();
	std::cout << " \n>>>>>>>>>>> destructor called <<<<<<<<<<<<" << std::endl;
}

