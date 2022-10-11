/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:30:17 by lchan             #+#    #+#             */
/*   Updated: 2022/10/11 12:46:12 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

enum {
	UNSIGNED,
	SIGNED
};

class Bureaucrat;
class Form {

	public:
		Form();
		Form(const Form &cpy);
		Form(std::string name, int slvl, int elvl);
		~Form();

		Form&	operator=(const Form & rhs);

		std::string	getName() const;
		bool		getSignStatus() const;
		int			getSignLvl() const;
		int			getExecLvl() const;

		void		beSigned(const Bureaucrat & b);

		class GradeTooHighException : public std::exception {
			public:
				const char * what() const throw(){
					return ("grade is too high");
				}
		}TooHigh;
		class GradeTooLowException : public std::exception {
			public:
				const char * what() const throw(){
					return ("grade is too low");
				}
				// const std::string gradeTooHigh(Form &f, Bureaucrat &b) const throw(){
				// 	return (f.getName() + " grade is too high for " + b.getName());
				// } //error message : member access into incomplete type --> can someone explain to me this dark magic ??
		}TooLow;

	private:
		const std::string	_name;
		bool				_signStatus;
		const int 			_signLvl;
		const int 			_execLvl;

};
std::ostream& 	operator<<(std::ostream &o, Form const &rhs);

#endif
