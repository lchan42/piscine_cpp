/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 11:39:29 by lchan             #+#    #+#             */
/*   Updated: 2022/09/20 15:42:46 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.hpp"
#include <iostream>

/************************ Sample1 ************************/
Sample::Sample(void){
	std::cout << "constructor called" << std::endl;
	this->test_var = 42;
};

Sample::~Sample(void){
	std::cout << "destructor called" << std::endl;
};

void	Sample::test_function(void){
	std::cout << "the test_function has been called" << std::endl;
}

/************************ Sample2 ************************/
Sample2::Sample2(int p1, double p2, float p3) :  a(p1), b(p2), c(p3){
	std::cout << "constructor called for Sample2" << std::endl;
	std::cout << "a = p1 = " << this->a << std::endl;
	std::cout << "b = p2 = " << this->b << std::endl;
	std::cout << "c = p3 = " << this->c << std::endl;
	this->_var = 42;
	std::cout << "_private_a initialized by construstor = " <<this->_var << std::endl;
};

int		Sample2::getVar(void) const {
	return (this->_var);
};

void	Sample2::setVar(int v) {
	if (v >= 0)
		this->_var = v;
	else
		std::cout << "must be positive \n";

	return ;
};

int		Sample2::compareVar (Sample2 *other) const{
	if (this->_var < other->_var)
		return (1);
	else if (this->_var > other->_var)
		return (-1);
	return (0);
};

Sample2::~Sample2(void){
	std::cout << "destructor called for Sample2" << std::endl;
};

/************************ Sample3 ************************/
Sample3::Sample3(void){
	std::cout << "constructor called for sample3" << std::endl;
	Sample3::_nbInst += 1;
};

Sample3::~Sample3(void){
	std::cout << "destructor called for sample3" << std::endl;
	Sample3::_nbInst -= 1;
};

int	Sample3::getnbInst(void){
	return (Sample3::_nbInst);
}

int	Sample3::_nbInst = 0;


/************************ Sample4 ************************/
Sample4::Sample4(void){
	std::cout << "constructor Sample4 called" << std::endl;
	this->foo = 42;
	std::cout << "constructor has set foo at value: " << this->foo << std::endl;
}

Sample4::~Sample4(void){
	std::cout << "destructor Sample4 called" << std::endl;
}

void	Sample4::bar(void) const{
	std::cout << "bar called" << std::endl;
}

/************************ integer ************************/

Integer::Integer(int const n) : _n(n){

	std::cout << "Integer constuctor called" << std::endl;
}


Integer::~Integer( void ){

	std::cout << "Integer destructor called" << std::endl;
}

Integer & Integer::operator=( Integer const & rhs){

	this->_n = rhs.getValue();

	return *this;
}

Integer Integer::operator+(Integer const & rhs) const {

	return(this->_n + rhs.getValue());
}


/************************ Simple ************************/

Simple::Simple( void ){
	std::cout << "Constructor called" << std::endl;
}

Simple::Simple( int const n ) : foo(n){
	std::cout << "Constructor called" << std::endl;
}

Simple::Simple( Sample const & src){
	std::cout << "copy constructor called" << std::endl;
	*this = src;

	return;

}

Simple::~Simple( void ){
	std::cout << "Destructor called" << std::endl;

}

Simple & Simple::operator=(Simple const & rhs){
	std::cout << "Assignment operator called" << std::endl;

	if ( this != &rhs )
		this->foo = rhs.getFoo();

	return (*this);
}


