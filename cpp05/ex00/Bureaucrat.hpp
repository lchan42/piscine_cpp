/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:06:49 by lchan             #+#    #+#             */
/*   Updated: 2022/10/07 11:30:35 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {
	public:
		Bureaucrat();
		Bureaucrat(const Bureaucrat &cpy);
		~Bureaucrat();

		Bureaucrat&	operator=(const Bureaucrat& rhs);

		const std::string	&getname();
		const int			getGrade();
		void				gradeUp();
		void				gradeDown();
	private:
		std::string _name;
		int			_grade;
};

#endif
