/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 18:01:35 by lchan             #+#    #+#             */
/*   Updated: 2022/10/01 19:02:41 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {

	public:
		Dog();
		Dog(const Dog &cpy);
		~Dog();

		virtual void	makeSound();

		Dog&	operator=(const Dog &rhs);
	protected:

	private:
		Brain* brain;
};

#endif
