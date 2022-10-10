/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:06:49 by lchan             #+#    #+#             */
/*   Updated: 2022/10/10 12:41:31 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
# define MAX_GRADE 1
# define MIN_GRADE 150

class Bureaucrat {
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &cpy);
		~Bureaucrat();

		Bureaucrat&	operator=(const Bureaucrat& rhs);


		const std::string	&getname() const;
		int					getGrade() const;
		void				gradeUp();
		void				gradeDown();

	private:
		const std::string _name;
		int			_grade;

		class GradeTooHighException : public std::exception {
			public:
				const std::string gradeTooHigh(const std::string &name) const throw(){
					return (name + " grade is too high");
				}
		}TooHigh;
		class GradeTooLowException : public std::exception {
			public:
				const std::string gradeTooLow(const std::string &name) const throw(){
					return (name + " grade is too low");
				}
		}TooLow;

		void		setGrade(int i);
		Bureaucrat&	operator++( void );
		Bureaucrat	operator++(int i);
		Bureaucrat&	operator--( void );
		Bureaucrat	operator--(int i);
};

std::ostream& operator<<(std::ostream& o,  Bureaucrat const & rhs);
#endif
