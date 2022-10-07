/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:30:17 by lchan             #+#    #+#             */
/*   Updated: 2022/10/07 18:35:11 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>

class Form {

	public:
		Form();
		Form(const Form &cpy);
		~Form();

		Form&	operator=(const Form & rhs);

	private:
		const std::string	_name;
		bool				_signed;
		 
}

#endif
