/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:06:52 by lchan             #+#    #+#             */
/*   Updated: 2022/10/12 00:45:54 by lchan            ###   ########.fr       */
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
	PresidentialPardonForm	p1("target");
	RobotomyRequestForm r1("target rrobot");
	ShrubberyCreationForm s1("Garance");

	std::cout << " >>>>>>>>>> checking form and bureaucrat creation <<<<<<<<<<" << std::endl;

	std::cout << ceo << "\n" << std::endl;
	std::cout << b2 << "\n" << std::endl;
	std::cout << p1 << "\n" << std::endl;

	b2.signForm(p1);
	b2.executeForm(p1);

	ceo.signForm(r1);
	ceo.executeForm(r1);

	// ceo.signForm(s1);
	// ceo.executeForm(s1);
}
