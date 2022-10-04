/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:18:26 by lchan             #+#    #+#             */
/*   Updated: 2022/10/04 17:45:46 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"

int	main( void ){

	IMateriaSource* src = new MateriaSource();

	src->learnMateria(new Ice());
	//src->learnMateria(new Cure());
}
