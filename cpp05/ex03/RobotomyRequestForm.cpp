/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:37:51 by lchan             #+#    #+#             */
/*   Updated: 2022/10/13 13:02:33 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RobotomyRequestForm.hpp"
# include <cstdlib>


/***********************************
 *		Constructor/destructor
 * *********************************/

RobotomyRequestForm::RobotomyRequestForm()
	: Form::Form(ROBOTO_NAME, RF_SIGN, RF_EXCE, "NA") {
	std::cout << "[RobotomyRequestForm] default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target)
	: Form::Form(ROBOTO_NAME, RF_SIGN, RF_EXCE, target) {
	std::cout << "[RobotomyRequestForm] param constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cpy)
	: Form::Form(cpy){
	std::cout << "[RobotomyRequestForm] cpy constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "[RobotomyRequestForm] default destructor called" << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & f){
	*((Form *)this) = *((Form *)&f);
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const{

	(void) executor;

	srand (time(NULL));
	std::cout << "****** Drill Sound ******" << std::endl;
	std::cout << "****** Drill Sound ******" << std::endl;
	std::cout << "****** Drill Sound ******" << std::endl;
	if (rand() % 2 > 0)
		std::cout << " *• Robotomy fail •*" << std::endl;
	else
		std::cout << " *•" << getTarget() << " is now a Robot" << " •*" << std::endl;
}
