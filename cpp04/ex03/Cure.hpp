/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:19:08 by lchan             #+#    #+#             */
/*   Updated: 2022/10/05 16:29:41 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {

	public :
		Cure();
		Cure(Cure &cpy);
		virtual ~Cure();

		Cure&	operator=(const Cure& rhs);

		virtual AMateria*	clone() const;
};


#endif
