/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 11:54:25 by lchan             #+#    #+#             */
/*   Updated: 2022/10/13 20:11:22 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){
	std::cout << "[Intern] default constructor called" << std::endl;
}

Intern::Intern(Intern const & cpy){
	*this = cpy;
	std::cout << "[Intern] pcy constructor called" << std::endl;
}

Intern::~Intern(){

	std::cout << "[Intern]  destructor called" << std::endl;
}

Intern & Intern::operator=(Intern const & rhs){

	(void) rhs;
	return (*this);
}

Form*	Intern::makeForm(std::string formName, std::string formTarget)
{
	int			index;
	(void)		formTarget;
	std::string tab[3] = {ROBOTO_NAME, SHRUBB_NAME, PRESID_NAME};

	for (index = 0; index < 3; index++)
		if (tab[index] == formName)
			break;
	switch (index)
	{
		case ROBOTONY:
			return (new RobotomyRequestForm(formTarget));
		case SHRUBBERY:
			return (new ShrubberyCreationForm(formTarget));
		case PRESIDENTIAL:
			return (new PresidentialPardonForm(formTarget));
		default:
		{
			std::cout << "intern couldn't creat form " << formName << std::endl;
			std::cout << "known forms are \"robotomy request\", \"shrubbery creation\", \"presidential pardon\"" << std::endl;
		}
	}
	return (NULL);
}
