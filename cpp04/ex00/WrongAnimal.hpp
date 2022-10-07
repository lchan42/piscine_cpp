/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:23:14 by lchan             #+#    #+#             */
/*   Updated: 2022/10/07 11:55:53 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal{

	public:

		WrongAnimal();
		WrongAnimal(const WrongAnimal& cpy);
		virtual ~WrongAnimal();

		std::string	getType();
		void		setType(std::string type);

		void	makeSound();

		WrongAnimal&	operator=(const WrongAnimal &rhs);

	protected:

			std::string type;

	private:

};

#endif
