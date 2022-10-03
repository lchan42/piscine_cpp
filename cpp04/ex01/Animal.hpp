/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:23:14 by lchan             #+#    #+#             */
/*   Updated: 2022/10/03 14:28:35 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include "Brain.hpp"
# include <iostream>

class Animal{

	public:

		Animal();
		Animal(std::string type);
		Animal(const Animal& cpy);
		virtual ~Animal();

		std::string	getType();
		void		setType(std::string type);

		virtual void	makeSound();

		virtual Animal&	operator=(const Animal &rhs);

	protected:

			std::string type;

	private:

};

#endif
