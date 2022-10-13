/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:06:49 by lchan             #+#    #+#             */
/*   Updated: 2022/10/11 15:08:59 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
# include "Form.hpp"

# define MAX_GRADE 1
# define MIN_GRADE 150



class Form;

class Bureaucrat {
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &cpy);
		~Bureaucrat();

		Bureaucrat&	operator=(const Bureaucrat& rhs);


		std::string			getName() const;
		int					getGrade() const;
		void				gradeUp();
		void				gradeDown();
		void				signForm(Form &f);
		void				executeForm(Form const & form);

	private:
		const std::string	_name;
		int					_grade;

		class GradeTooHighException : public std::exception {
			public:
				const std::string gradeTooHigh(const std::string &name) const throw(){
					return (name + " grade is too high");
				}
				const char * what() const throw(){
					return ("grade is too high");
				}
		}TooHigh;
		class GradeTooLowException : public std::exception {
			public:
				const std::string gradeTooLow(const std::string &name) const throw(){
					return (name + " grade is too low");
				}
				const char * what() const throw(){
					return ("grade is too low");
				}
		} TooLow;

		void		setGrade(int i);
		Bureaucrat&	operator++( void );
		Bureaucrat	operator++(int i);
		Bureaucrat&	operator--( void );
		Bureaucrat	operator--(int i);
};

std::ostream& operator<<(std::ostream& o,  Bureaucrat const & rhs);
#endif
