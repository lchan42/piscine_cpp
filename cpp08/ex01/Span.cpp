/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:39:07 by lchan             #+#    #+#             */
/*   Updated: 2022/11/01 19:45:08 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

/***************************************
 * 			Coplien form
 ***************************************/

Span::Span(){
	std::cout << "Span default constructor called" << std::endl;
}

Span::Span(Span const &cpy){
	*this = cpy;

	std::cout << "Span cpy constructor called" << std::endl;
}

Span::Span(unsigned int N) : _Max(N){

	std::cout << "Span param constructor called" << std::endl;
}

Span::~Span(){
	std::cout << "Span param destructor called" << std::endl;
}

Span &	Span::operator=(Span const & rhs){
	this->_Max = rhs._Max;
	this->_storage = rhs._storage;

	return (*this);
}

/***************************************
 * 			inner function
 ***************************************/

template <typename T>
void	displayT(T display){
	std::cout << display << " ";
}

void	Span::displayLst( void ){

	std::cout << " ... displaying lst content : " ;
	std::for_each(_storage.begin(), _storage.end(), displayT<int>);
	std::cout << std::endl;
}

int	findShortestSpan(std::list<int> _storage){

	unsigned int				ret = UINT_MAX;
	std::list<int>::iterator	it = _storage.begin();
	std::list<int>::iterator	ite = _storage.end();

	for(unsigned long int i = 0; ++i < _storage.size() - 1; std::advance(it, 1))
	{
		std::list<int>::iterator it2 = _storage.begin();
		for (std::advance(it2, i); it2 != ite; it2++ )
			if (/*it != it2 && */abs(*it - *it2) < ret)
				ret = abs(*it - *it2);
	}
	return(ret);
}

int	findLongestSpan(std::list<int> & _storage){

	std::list<int>::const_iterator it = _storage.begin();
	std::list<int>::const_iterator ite = _storage.end();

	int min = *(std::min_element(it, ite));
	int max = *(std::max_element(it, ite));

	return (max - min);
}

int	Span::longestSpan(){
	if (_storage.size() <= 1)
		throw std::invalid_argument("not enough element in _storage");
	else
		return (findLongestSpan(_storage));
}

int	Span::shortestSpan(){
	if (_storage.size() <= 1)
		throw std::invalid_argument("not enough element in _storage");
	else
		return (findShortestSpan(_storage));
}

void	Span::addNumber(int toAdd){

	if (_storage.size() < _Max)
		_storage.push_back(toAdd);
	else
		throw std::overflow_error("Max storage has been reached");
}

void	Span::addNumberX(int *array, int X){
	for (int i = 0; i < X; i++)
		addNumber(array[i]);
}

void	Span::addNumberN(std::vector<int> lst){

	std::vector<int>::iterator	it = lst.begin();
	std::vector<int>::iterator	ite = lst.end();

	try{
		for (it; it != ite; it++){
			addNumber(*it);
	}}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
}

void	Span::addNumber(std::list<int>::iterator it, std::list<int>::iterator ite){
	try{
		for (it; it != ite; it++)
			addNumber(*it);
			//std::for_each(it, ite, addNumber);
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
}
