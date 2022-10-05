/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:18:26 by lchan             #+#    #+#             */
/*   Updated: 2022/10/05 15:56:50 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"


void	checkMateriaSource()
{
	std::cout << "\n>>>>>>>>>> checkMateriaSource test <<<<<<<<<<\n" << std::endl;

	IMateriaSource* src = new MateriaSource();
	AMateria*		save;

	src->getInventory().showAllStock();
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());

	src->getInventory().showAllStock();
	save = src->getInventory().getMateria(2);
	src->getInventory().removeMateria(2);
	src->getInventory().showAllStock();
	src->learnMateria(new Ice());
	src->getInventory().showAllStock();
	//src->learnMateria(new Cure());

	std::cout << "........... calling destructors ..........." << std::endl;
	delete src;
	delete save;
}

void	checkCaracters(){

	std::cout << "\n>>>>>>>>>> checkCaracters test <<<<<<<<<<\n" << std::endl;

	AMateria*	ice = new Ice;
	ICharacter*	Cloud = new Character("Cloud");
	ICharacter*	Genova = new Character("Genova");
	AMateria*	newIce = ice->clone();

	Cloud->equip(ice);
	Cloud->equip(newIce);
	Cloud->use(0, *Genova);
	Cloud->use(1, *Genova);
	Cloud->use(2, *Genova);
	Cloud->use(3, *Genova);

	Cloud->unequip(1);
	std::cout << "........... calling destructors ..........." << std::endl;
	delete Cloud;
	delete Genova;
	delete newIce;	//--> we unequiped newIce from Cloud, that' s why we have to delete it at the end;

}

int	main( void ){

	//checkMateriaSource();
	checkCaracters();
}

//materia source should not access function remove materia/
