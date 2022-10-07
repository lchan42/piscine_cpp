/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:06:52 by lchan             #+#    #+#             */
/*   Updated: 2022/10/07 11:41:25 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/***********************************
 *			Coplien form
 * *********************************/

Bureaucrat::Bureaucrat() : _name("default"), _grade(0){
	std::cout << " [Bureaucrat] default constructor called ";

}

Bureaucrat::Bureaucrat(const Bureaucrat &cpy){
	*this = cpy;
	std::cout << " [Bureaucrat] default constructor called ";

}

Bureaucrat::~Bureaucrat(){

	std::cout << " [Bureaucrat] [destructor] called ";
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat &rhs){
	this->_name = rhs._name;
	this->_grade = rhs._grade;
}

/***********************************
 *			getter/setter
 * *********************************/

const std::string	&Bureaucrat::getname(){
	return (_name);
}

const int			Bureaucrat::getGrade(){
	return (_grade);
}

/***********************************
 *			getter/setter
 * *********************************/

void	Bureaucrat::gradeUp(){
	try {
	 	if (_grade >= 150)
			throw std::exception();
		++_grade;
	}
	catch (std::exception &e){

	}
}

void	Bureaucrat::gradeDown(){}


