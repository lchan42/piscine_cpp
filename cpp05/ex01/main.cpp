/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:06:52 by lchan             #+#    #+#             */
/*   Updated: 2022/10/11 13:03:38 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(){

	Form	f1;
	Form	f2("f2", 1 , 1);
	Bureaucrat	ceo("CEO", 1);
	Bureaucrat	b2("b2", 100);


	std::cout << " >>>>>>>>>> checking form and bureaucrat creation <<<<<<<<<<" << std::endl;
	std::cout << f1 << "\n" << std::endl;
	std::cout << f2 << "\n" << std::endl;
	std::cout << ceo << "\n" << std::endl;
	std::cout << b2 << "\n" << std::endl;


	std::cout << " >>>>>>>>>> checking exception if unvalide grade used in constructor <<<<<<<<<<" << std::endl;
	try{
		Form unvalidForm = Form("Error", 1, 160);
	}
	catch (std::exception &e) {
		std::cerr << "trying to creat Form unvalidForm = Form(\"Error\", 1, 160); --> ";
		std::cerr << e.what() << std::endl;
	};
	try{
		Form unvalidForm = Form("Error", 160, 1);
	}
	catch (std::exception &e) {
		std::cerr << "trying to creat Form unvalidForm = Form(\"Error\", 160, 1); --> ";
		std::cerr << e.what() << std::endl;
	};
	std::cout << std::endl;


	std::cout << " >>>>>>>>>> checking invalide Bureaucrat creation <<<<<<<<<<" << std::endl;
	try{
		Bureaucrat ub = Bureaucrat("Unvalid Bureaucrat", 160);
 	}
	catch (std::exception &e) {
		std::cerr << "Bureaucrat ub = Bureaucrat(\"Unvalid Bureaucrat\", 160); --> ";
		std::cerr << e.what() << std::endl;
	};
	try{
		Bureaucrat ub = Bureaucrat("Unvalid Bureaucrat", -100);
 	}
	catch (std::exception &e) {
		std::cerr << "Bureaucrat ub = Bureaucrat(\"Unvalid Bureaucrat\", -100); --> ";
		std::cerr << e.what() << std::endl;
	};
	std::cout << std::endl;


	std::cout << " >>>>>>>>>> checking signForm and getsigned function <<<<<<<<<<" << std::endl;
	std::cout << " \t>>>> invalid sign <<<<" << std::endl;
	b2.signForm(f2);
	std::cout << f2 << std::endl;
	std::cout << " \t>>>> valid sign <<<<" << std::endl;
	for (int i = b2.getGrade(); i != f2.getSignLvl(); i--) // upgrading bureaucrat lvl until f2 required lvl
		b2.gradeUp();
	std::cout << b2 << std::endl;
	b2.signForm(f2);
	std::cout << f2 << std::endl;


}
