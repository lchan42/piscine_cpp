/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:42:39 by lchan             #+#    #+#             */
/*   Updated: 2022/11/02 14:54:56 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"


typedef MutantStack<int>::iterator iterator;
typedef std::vector<int>::iterator viterator;


// template <typename T>
// void	displayStackT(std::string name, T<int> type){
// 	type::iterator it = type.begin();
// 	type:::iterator ite = type.end();

// 	std::cout << "... displaying " << name << " ..." << std::endl;
// 	while (it != ite)
// 	{
// 		std::cout << *it << " ";
// 		++it;
// 	}
// 	std::cout << "\n" << std::endl;
// }

void	displayStack(std::string lstname, MutantStack<int> &mstack){

	iterator it = mstack.begin();
	iterator ite = mstack.end();

	std::cout << "... displaying " << lstname << " ..." << std::endl;
	while (it != ite)
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << "\n" << std::endl;
}

void	displayStack(std::string lstname, std::vector<int> &mstack){

	viterator it = mstack.begin();
	viterator ite = mstack.end();

	std::cout << "... displaying " << lstname << " ..." << std::endl;
	while (it != ite)
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << "\n" << std::endl;
}

void	testingRhs(){

	std::cout << ">>>>>>>>>> testingRhs <<<<<<<<<<" << std::endl;
	MutantStack<int> m1;
	MutantStack<int> m2;

	for (int i = 0; i < 10; i++)
		m1.push(rand() % 100);
	displayStack("m1", m1);
	m2 = m1;
	displayStack("m2", m2);
	MutantStack<int> m3(m2);
	displayStack("m3", m3);
}

void	comparingWithVector(){

	std::cout << ">>>>>>>>>> comparingWithVector <<<<<<<<<<" << std::endl;
	MutantStack<int>	m1;
	std::vector<int>	v1;

	for (int i = 0; i < 10; i++)
		m1.push((rand() % 100));
	for (iterator it = m1.begin(); it != m1.end(); it++)
		v1.push_back(*it);
	displayStack("m1", m1);
	displayStack("v1", v1);
}

int	main( void ){
	srand((unsigned)	time(NULL));
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << "mstack.top = " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "mstack.size = " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	displayStack("mstack", mstack);
	testingRhs();
	comparingWithVector();
	std::stack<int> s(mstack);
	return 0;
}
