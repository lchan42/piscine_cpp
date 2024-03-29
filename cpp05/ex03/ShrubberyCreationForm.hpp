/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:38:02 by lchan             #+#    #+#             */
/*   Updated: 2022/10/13 10:50:13 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <iostream>
# include <fstream>

#define SF_SIGN 145
#define SF_EXCE 137

class ShrubberyCreationForm : public Form
{
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &cpy);
	virtual ~ShrubberyCreationForm();

	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &f);

	virtual void execute(Bureaucrat const &executor) const;
};

#endif
