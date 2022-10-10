/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:06:52 by lchan             #+#    #+#             */
/*   Updated: 2022/10/10 12:42:51 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(){

	try{
		Bureaucrat ceo = Bureaucrat("Error", -1000);
	}
	catch (std::exception &e) {
	 	std::cerr << "wrong init" << std::endl;
	};

	Bureaucrat ceo = Bureaucrat("CEO", 1);
	// Bureaucrat ceoOperatorEgal = ceo;
	//std::cout << ceoOperatorEgal << std::endl;

	Bureaucrat intern = Bureaucrat();

	std::cout << ceo << std::endl;
	ceo.gradeDown();
	std::cout << ceo << std::endl;
	ceo.gradeUp();
	std::cout << ceo << std::endl;
	ceo.gradeUp();
	std::cout << ceo << std::endl;

	std::cout << intern << std::endl;
	intern.gradeDown();
	std::cout << intern << std::endl;

}
