/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fire.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:19:08 by lchan             #+#    #+#             */
/*   Updated: 2022/10/04 19:26:57 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIRE_HPP
# define FIRE_HPP

#include "AMateria.hpp"

class Fire : public AMateria {

	public :
		Fire();
		Fire(Fire &cpy);
		virtual ~Fire();

		Fire&	operator=(const Fire& rhs);

		virtual AMateria*	clone() const;
};


#endif
