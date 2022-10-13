/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:38:00 by lchan             #+#    #+#             */
/*   Updated: 2022/10/13 13:03:01 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"

/***********************************
 *		Constructor/destructor
 * *********************************/

ShrubberyCreationForm::ShrubberyCreationForm()
	: Form::Form(SHRUBB_NAME, SF_SIGN, SF_EXCE, "NA") {
	std::cout << "[ShrubberyCreationForm] default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: Form::Form(SHRUBB_NAME, SF_SIGN, SF_EXCE, target) {
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

	(void) executor;
	std::ofstream	ofs((getTarget() + "_shrubbery").c_str());

	if (!ofs)
	{
		std::cerr << "Something wrong happens, impossible to create <target>_shrubbery file" << std::endl;
		return ;
	}
	ofs	<< "       _-_         " << "       _-_         "<< "\n"
		<< "    /~~   ~~\\     " << "    /~~   ~~\\     "<< "\n"
		<< " /~~         ~~\\  " << " /~~         ~~\\  "<< "\n"
		<< "{               }  " << "{               }  "<< "\n"
		<< " \\  _-     -_  /  " << " \\  _-     -_  /  "<< "\n"
		<< "   ~  \\\\ //  ~   " << "   ~    \\\\ //  ~   "<< "\n"
		<< "_- -   | | _- _    " << "_- -   | | _- _    "<< "\n"
		<< "  _ -  | |   -_    " << "  _ -  | |   -_    "<< "\n"
		<< "      // \\\\        "<< "      // \\\\        "<< "\n" << std::endl;
	ofs.close();
}
