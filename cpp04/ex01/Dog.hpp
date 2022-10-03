/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 18:01:35 by lchan             #+#    #+#             */
/*   Updated: 2022/10/03 17:15:27 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {

	public:
		Dog();
		Dog(const Dog &cpy);
		virtual	~Dog();

		virtual void	makeSound();
		Brain 			*getBrain();

		virtual Dog&	operator=(const Dog &rhs);
	protected:

	private:
		Brain* brain;
};

#endif
