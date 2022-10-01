/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:54:58 by lchan             #+#    #+#             */
/*   Updated: 2022/10/01 19:02:39 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
	public:
		Cat();
		Cat(const Cat &cpy);
		virtual ~Cat();

		virtual void	makeSound();

		Cat&	operator=(const Cat &rhs);
	protected:

	private:
		Brain* brain;
};

#endif
