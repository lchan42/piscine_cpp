/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 11:54:44 by lchan             #+#    #+#             */
/*   Updated: 2022/10/13 19:17:53 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

enum {
	ROBOTONY,
	SHRUBBERY,
	PRESIDENTIAL
};

#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern{
	public :
		Intern();
		Intern(Intern const & cpy);
		~Intern();

		Intern & operator=(Intern const & rhs);

		Form*	makeForm(std::string formName, std::string formTarget);
};

#endif
