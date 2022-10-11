/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:30:33 by lchan             #+#    #+#             */
/*   Updated: 2022/10/11 12:46:12 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/***********************************
 *		Constructor/destructor
 * *********************************/

Form::Form()
	: _name("NA"), _signStatus(UNSIGNED), _signLvl(150), _execLvl(150){
	std::cout << "[Form] default constructor called" << std::endl;
}

Form::Form(std::string name, int slvl, int elvl)
	: _name(name), _signStatus(UNSIGNED), _signLvl(slvl), _execLvl(elvl){
		if (slvl > MIN_GRADE || slvl < MAX_GRADE)
			throw TooHigh;
		else if (elvl > MIN_GRADE || slvl < MAX_GRADE)
			throw TooLow;
	std::cout << "[Form] param constructor called" << std::endl;
}

Form::Form(const Form &cpy)
	: _name(cpy._name), _signStatus(cpy._signStatus), _signLvl(cpy._signLvl), _execLvl(cpy._execLvl){
	std::cout << "[Form] cpy constructor called" << std::endl;
}

Form::~Form() {
	std::cout << "[Form] default destructor called" << std::endl;
}

/***********************************
 *		Operator Overload
 * *********************************/
Form&	Form::operator=(const Form &rhs) {
	if (&rhs != this)
		_signStatus = rhs._signStatus;
	return (*this);
}

/***********************************
 *		getter / accesser
 * *********************************/

std::string	Form::getName() const {
	return (_name);
}

bool		Form::getSignStatus() const{
	return (_signStatus);
}

int			Form::getSignLvl() const{
	return (_signLvl);
}
int			Form::getExecLvl() const {
	return(_execLvl);
}

void		Form::beSigned(const Bureaucrat &b){

	if (b.getGrade() > _signLvl)
		throw TooLow;
	_signStatus = SIGNED;
	std::cout	<< b.getName() << " signed form " << _name << std::endl;
}

// const std::string Form::GradeTooLowException::gradeToolow(Bureaucrat &b, Form &f) const throw(){
// {
// 					return (" Bureaucrat :" + b.getName()
// 							+ "couldn't sign form: " + f.getName()
// 							+ "because his grade is too low)");
// }

std::ostream & operator<<(std::ostream & o, Form const &rhs){

	std::string status = ((rhs.getSignStatus() == 1 ) ? "SIGNED" : "UNSIGNED");

	o	<< "file name: " + rhs.getName() << "\n"
		<< "signed: " + status << "\n"
		<< "min lvl to sign: " << rhs.getSignLvl() << "\n"
		<< "min Lvl to exec: " << rhs.getExecLvl();
	return (o);
}
