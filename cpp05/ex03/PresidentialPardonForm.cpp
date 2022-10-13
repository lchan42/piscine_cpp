/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:37:33 by lchan             #+#    #+#             */
/*   Updated: 2022/10/13 13:02:43 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PresidentialPardonForm.hpp"

/***********************************
 *		Constructor/destructor
 * *********************************/

PresidentialPardonForm::PresidentialPardonForm()
	: Form::Form(PRESID_NAME, PF_SIGN, PF_EXCE, "NA") {
	std::cout << "[PresidentialPardonForm] default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target)
	: Form::Form(PRESID_NAME, PF_SIGN, PF_EXCE, target) {
	std::cout << "[PresidentialPardonForm] param constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cpy)
	: Form::Form(cpy){
	std::cout << "[PresidentialPardonForm] cpy constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "[PresidentialPardonForm] default destructor called" << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & f) {
	*((Form *)this) = *((Form *)&f);
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const{

	(void) executor;

	std::cout << this->getTarget() << " has been forgiven by Zaphod Beeblebrox." << std::endl;
}
