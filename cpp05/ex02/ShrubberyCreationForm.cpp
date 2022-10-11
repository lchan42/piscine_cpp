/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:38:00 by lchan             #+#    #+#             */
/*   Updated: 2022/10/12 01:17:26 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"

/***********************************
 *		Constructor/destructor
 * *********************************/

ShrubberyCreationForm::ShrubberyCreationForm()
	: Form::Form("ShrubberyCreationForm", SF_SIGN, SF_EXCE, "NA") {
	std::cout << "[ShrubberyCreationForm] default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: Form::Form("ShrubberyCreationForm", SF_SIGN, SF_EXCE, target) {
	std::cout << "[ShrubberyCreationForm] param constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cpy)
	: Form::Form(cpy){
	std::cout << "[ShrubberyCreationForm] cpy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "[ShrubberyCreationForm] default destructor called" << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & f){
	*((Form *)this) = *((Form *)&f);
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const{

	std::cout << executor.getName() << " has been forgiven by Zaphod Beeblebrox." << std::endl;
}
