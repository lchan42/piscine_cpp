/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:30:17 by lchan             #+#    #+#             */
/*   Updated: 2022/10/13 20:21:45 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#define PRESID_NAME "presidential pardon"
#define ROBOTO_NAME "robotomy request"
#define SHRUBB_NAME "shrubbery creation"

enum {
	UNSIGNED,
	SIGNED
};

enum {
	PF_EXCE = 5,
	PF_SIGN = 25,
	RF_EXCE = 45,
	RF_SIGN = 72,
	SF_EXCE = 137,
	SF_SIGN = 145
};

class Bureaucrat;

class Form {

	public:
		Form();
		Form(const Form &cpy);
		Form(std::string name, int slvl, int elvl, std::string target);
		virtual ~Form();

		Form&	operator=(const Form & rhs);

		std::string	getName() const;
		bool		getSignStatus() const;
		int			getSignLvl() const;
		int			getExecLvl() const;
		std::string	getTarget() const;
		void		beSigned(const Bureaucrat & b);

		void			tryExecute(Bureaucrat const & executor) const;
		virtual void	execute(Bureaucrat const & executor) const = 0;

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
		}TooLow;
		class UnsignedException : public std::exception {
			public:
				const char * what() const throw(){
					return ("Doctument is not signed");
				}
		}Unsigned;

	protected:
		const std::string	_name;
		bool				_signStatus;
		const int 			_signLvl;
		const int 			_execLvl;
		const std::string	_target;

};
std::ostream& 	operator<<(std::ostream &o, Form const &rhs);

#endif
