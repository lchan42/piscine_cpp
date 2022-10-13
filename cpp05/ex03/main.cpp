/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:06:52 by lchan             #+#    #+#             */
/*   Updated: 2022/10/13 20:29:54 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main(){


	Bureaucrat	ceo("CEO", 1);
	Bureaucrat	b2("b2", 100);
	Intern		newIntern;

	std::cout << "~~~~~~~~~~~~~~ >>>>>>>>>> checking form and bureaucrat creation <<<<<<<<<< ~~~~~~~~~~~~~~" << std::endl;

	std::cout << ceo << "\n" << std::endl;
	std::cout << b2 << "\n" << std::endl;

	std::cout << "~~~~~~~~~~~~~~ >>>>>>>>>> checking Intern::makeForm() error case <<<<<<<<<< ~~~~~~~~~~~~~~" << std::endl;
	Form *jokeForm = newIntern.makeForm("joke", "Roger");
	std::cout << jokeForm << std::endl;
	Form *empty = newIntern.makeForm("", "");
	std::cout << empty << std::endl;
	Form *empty2 = newIntern.makeForm("", "Target");
	std::cout << empty2 << std::endl;

	std::cout << "~~~~~~~~~~~~~~ >>>>>>>>>> checking Intern::makeForm() 1 <<<<<<<<<< ~~~~~~~~~~~~~~" << std::endl;
	Form *r1 = newIntern.makeForm("robotomy request", "Kuma");
	std::cout << "\n" << *r1 << "\n" << std::endl;
	ceo.signForm(*r1);
	ceo.executeForm(*r1);

	std::cout << "~~~~~~~~~~~~~~ >>>>>>>>>> checking Intern::makeForm() 2 <<<<<<<<<< ~~~~~~~~~~~~~~" << std::endl;
	Form *s1 = newIntern.makeForm("shrubbery creation", "Earth");
	std::cout << "\n" << *s1 << "\n" << std::endl;
	ceo.signForm(*s1);
	ceo.executeForm(*s1);
		std::cout << "~~~~~~~~~~~~~~ >>>>>>>>>> checking Intern::makeForm() 3 <<<<<<<<<< ~~~~~~~~~~~~~~" << std::endl;
	Form *p1 = newIntern.makeForm("presidential pardon", "Thanksgiving Turkey");
	std::cout << "\n" << *p1 << "\n" << std::endl;
	ceo.signForm(*p1);
	ceo.executeForm(*p1);

	std::cout << "~~~~~~~~~~~~~~ >>>>>>>>>> calling destructors <<<<<<<<<< ~~~~~~~~~~~~~~" << std::endl;

	 delete r1;
	delete s1;
	delete p1;
}
