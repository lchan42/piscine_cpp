/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 18:38:11 by lchan             #+#    #+#             */
/*   Updated: 2022/10/01 18:50:57 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

#define MAX_IDEA 100

class Brain {
	public:
		Brain();
		Brain(const Brain &cpy);
		~Brain();

		Brain&	operator=(const Brain &rhs);
	protected:

	private:
		std::string ideas[MAX_IDEA];
};

#endif
