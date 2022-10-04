/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:19:08 by lchan             #+#    #+#             */
/*   Updated: 2022/10/04 19:26:57 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {

	public :
		Ice();
		Ice(Ice &cpy);
		virtual ~Ice();

		Ice&	operator=(const Ice& rhs);

		virtual AMateria*	clone() const;
};


#endif
