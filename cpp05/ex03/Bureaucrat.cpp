/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:06:59 by lchan             #+#    #+#             */
/*   Updated: 2022/11/02 22:35:07 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/***********************************
 *		Constructor/destructor
 * *********************************/

Bureaucrat::Bureaucrat() : _name("Intern"), _grade(MIN_GRADE){
	std::cout << "..[Bureaucrat] default constructor called " << std::endl;

}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade){

	this->setGrade(grade);
	std::cout << "..[Bureaucrat] param constructor called " << std::endl;
}


Bureaucrat::Bureaucrat(const Bureaucrat &cpy){
	*this = cpy;
	std::cout << "..[Bureaucrat] default constructor called " << std::endl;

}

Bureaucrat::~Bureaucrat(){

	std::cout << "..[Bureaucrat] destructor called " << std::endl;
}


/***********************************
 *		operator overload
 * *********************************/

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat &rhs){
	//this->_name = rhs._name;
	this->_grade = rhs._grade;
	return (*this);
}
		//prefix increment operator
Bureaucrat &	Bureaucrat::operator++(void){
	this->_grade++;

	return (*this);
}

		//postfix increment operator
Bureaucrat	Bureaucrat::operator++(int i){

	Bureaucrat	tmp(*this);

	if (i)
 		this->_grade += i;
	else
		this->_grade++;
	return (tmp);
}

		//prefix increment operator
Bureaucrat &	Bureaucrat::operator--(void){
	this->_grade--;

	return (*this);
}

		//postfix increment operator
Bureaucrat	Bureaucrat::operator--(int i){

	Bureaucrat	tmp(*this);

	if (i)
 		this->_grade -= i;
	else
		this->_grade--;
	return (tmp);
}

/***********************************
 *			getter/setter
 * *********************************/

std::string	Bureaucrat::getName() const {
	return (_name);
}

int					Bureaucrat::getGrade() const {
	return (_grade);
}

void		Bureaucrat::setGrade(int i){
	if (i < MAX_GRADE)
		throw TooHigh;
	else if (i > MIN_GRADE)
		throw TooLow;
	this->_grade = i;
}
/***********************************
 *		inher function
 * *********************************/

void	Bureaucrat::gradeUp(){
	try {
	 	if (_grade <= MAX_GRADE)
			throw TooHigh;
		--(*this);
	}
	catch (Bureaucrat::GradeTooHighException &e){
		std::cerr << e.gradeTooHigh(this->getName()) << std::endl;
	}
}

void	Bureaucrat::gradeDown(){
	try {
	 	if (_grade >= MIN_GRADE)
			throw TooLow;
		++(*this);
	}
	catch (Bureaucrat::GradeTooLowException &e){
		std::cerr << e.gradeTooLow(this->getName()) << std::endl;
	}
}

void	Bureaucrat::signForm(Form &f){

	try{
		f.beSigned(*this);
	}
	catch (Form::GradeTooLowException &e){
		std::cout	<< "signForm exception caught : " << e.what() << std::endl;
		std::cerr	<< _name << " (grade: " << _grade
					<< ") couldn't sign form " << f.getName()
					<< " (required grade : " << f.getSignLvl() << ")" <<std::endl;
	}
}

void	Bureaucrat::executeForm(Form const & form){
	try{
		form.tryExecute(*this);
	}
	catch (std::exception &e){
		std::cout	<< "signForm exception caught : " << e.what() << std::endl;
		std::cerr	<< _name << " (grade: " << _grade
					<< ") couldn't execute form " << form.getName();
	}
}

std::ostream& operator<<(std::ostream& o,  Bureaucrat const & rhs){
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return (o);
}
