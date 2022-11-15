/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:42:39 by lchan             #+#    #+#             */
/*   Updated: 2022/11/15 15:15:34 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"


typedef MutantStack<int>::iterator iterator;
typedef std::vector<int>::iterator viterator;

// deux facon de display, avec plage iterator ou avec template sur la liste
template <typename InputIt>
void	displayStack(std::string name, InputIt it, InputIt ite){

	std::cout << "... displaying " << name << " ..." << std::endl;
	for (it; it != ite; ++it)
		std::cout << *it << " ";
	std::cout << "\n" << std::endl;
}

template <typename T>
void	displayStack(std::string name, T type){
	typename T::iterator ite = type.end();
	typename T::iterator it = type.begin();

 	std::cout << "... displaying " << name << " ..." << std::endl;
	for (it; it != ite; ++it)
		std::cout << *it << " ";
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

void	subjectMainTest(){

	std::cout << ">>>>>>>>>> subjectMainTest <<<<<<<<<<" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "mstack.top = " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "mstack.size = " <<mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	//displayStack("mstack", it, ite);
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
}

void	subjectMainTest2(){

std::cout << ">>>>>>>>>> subjectMainTest2 <<<<<<<<<<" << std::endl;
	std::list<int> lst;
	lst.push_back(5);
	lst.push_back(17);
	std::cout << "lst.begin= " << *(lst.rbegin()) << std::endl;
	lst.pop_back();
	std::cout << "lst.size = " << lst.size() << std::endl;
	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(737);
	lst.push_back(0);
	std::list<int>::iterator it = lst.begin();
	std::list<int>::iterator ite = lst.end();
	//displayStack("lst", it, ite);
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
}

void	subjectMainTest3(){

	std::cout << ">>>>>>>>>> subjectMainTest3 <<<<<<<<<<" << std::endl;
	std::list<int>		lst;
	MutantStack<int>	mstack;

	for (int i = 0; i < 25; i ++)
		mstack.push(rand() % 10000);
	for (iterator it = mstack.begin(); it != mstack.end(); it++)
		lst.push_back(*it);
	displayStack("lst", lst);
	displayStack("mstack", mstack);
}

int	main( void ){
	srand((unsigned)	time(NULL));

	subjectMainTest();
	subjectMainTest2();
	subjectMainTest3();
	testingRhs();
	comparingWithVector();
	return 0;
}
