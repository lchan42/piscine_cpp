/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:54:58 by lchan             #+#    #+#             */
/*   Updated: 2022/10/03 14:16:55 by lchan            ###   ########.fr       */
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

		virtual Cat&	operator=(const Cat &rhs);
	protected:

	private:
		Brain* brain;
};

#endif
