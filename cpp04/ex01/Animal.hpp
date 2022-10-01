/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:23:14 by lchan             #+#    #+#             */
/*   Updated: 2022/10/01 18:52:57 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include "Brain.hpp"
# include <iostream>

class Animal{

	public:

		Animal();
		Animal(const Animal& cpy);
		virtual ~Animal();

		std::string	getType();
		void		setType(std::string type);

		virtual void	makeSound();

		Animal&	operator=(const Animal &rhs);

	protected:

			std::string type;

	private:

};

#endif
