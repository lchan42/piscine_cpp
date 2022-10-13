/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:06:52 by lchan             #+#    #+#             */
/*   Updated: 2022/10/13 18:48:59 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(){


	Bureaucrat	ceo("CEO", 1);
	Bureaucrat	b2("b2", 100);
	PresidentialPardonForm	p1("[presidential target]");
	RobotomyRequestForm r1("[robot target]");
	ShrubberyCreationForm s1("[dryLand]");

	std::cout << " >>>>>>>>>>>>>>>>>>>> checking form and bureaucrat creation <<<<<<<<<<<<<<<<<<<<" << std::endl;

	std::cout << ceo << "\n" << std::endl;
	std::cout << b2 << "\n" << std::endl;
	std::cout << p1 << "\n" << std::endl;
	std::cout << r1 << "\n" << std::endl;
	std::cout << s1 << "\n" << std::endl;

	std::cout << " >>>>>>>>>>>>>>>>>>>> checking form exeptions <<<<<<<<<<<<<<<<<<<<" << std::endl;
	b2.signForm(p1);
	std::cout << p1 << "\n" << std::endl;

	b2.executeForm(p1);
	std::cout << p1 << "\n" << std::endl;

	std::cout << std::endl;

	b2.signForm(r1);
	b2.executeForm(r1);
	std::cout << std::endl;




	std::cout << " >>>>>>>>>>>>>>>>>>>> checking exec funtion <<<<<<<<<<<<<<<<<<<<" << std::endl;
	std::cout << "\n >>>>>>>>>>>>>>>>>>>> checking PresidentialPardonForm" << std::endl;
	ceo.signForm(p1);
	ceo.executeForm(p1);

	std::cout << "\n >>>>>>>>>>>>>>>>>>>> checking RobotomyRequestForm" << std::endl;
	ceo.signForm(r1);
	ceo.executeForm(r1);

	std::cout << "\n >>>>>>>>>>>>>>>>>>>> checking ShrubberyCreationForm" << std::endl;
	b2.signForm(s1);
	b2.executeForm(s1);
	std::cout << std::endl;

	std::cout << " >>>>>>>>>>>>>>>>>>>> calling destructors <<<<<<<<<<<<<<<<<<<<" << std::endl;
}
