/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:37:54 by lchan             #+#    #+#             */
/*   Updated: 2022/10/13 20:09:25 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"


class RobotomyRequestForm : public Form{
	public :

		RobotomyRequestForm();
		RobotomyRequestForm(const std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &cpy);
		virtual ~RobotomyRequestForm();

		RobotomyRequestForm & operator=(const RobotomyRequestForm & f);
		virtual void	execute(Bureaucrat const & executor) const;

};

#endif
