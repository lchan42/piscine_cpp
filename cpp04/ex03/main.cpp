/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:18:26 by lchan             #+#    #+#             */
/*   Updated: 2022/10/07 12:32:16 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Fire.hpp"
#include "Cure.hpp"

void	checkMateriaSourceCreation(){
	std::cout << "\n>>>>>>>>>> checkMateriaSourceCreation test <<<<<<<<<<\n" << std::endl;

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Fire());
	src->getInventory().showAllStock();

	AMateria*		save1 = src->createMateria("ice");
	AMateria*		save2 = src->createMateria("fire");
 	src->createMateria("cure"); // fail to find cure in inventory = no clone

	std::cout << "........... calling destructors ..........." << std::endl;
	delete save1;
	delete save2;
	delete src;
	//delete save3;
}

void	checkMateriaSource()
{
	std::cout << "\n>>>>>>>>>> checkMateriaSource test <<<<<<<<<<\n" << std::endl;

	IMateriaSource* src = new MateriaSource();
	AMateria*		save;

	src->getInventory().showAllStock();

	src->learnMateria(new Ice());
	src->learnMateria(new Fire());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->getInventory().showAllStock();

	save = src->getInventory().getMateria(2);
	src->getInventory().removeMateria(2);
	src->getInventory().showAllStock();

	src->learnMateria(new Ice());
	src->getInventory().showAllStock();



	std::cout << "........... calling destructors ..........." << std::endl;
	delete src;
	delete save;
}

void	checkCaracters(){

	std::cout << "\n>>>>>>>>>> checkCaracters test <<<<<<<<<<\n" << std::endl;

	IMateriaSource	*src = new MateriaSource();
	AMateria		*teamIce = new Ice;
	AMateria		*teamCure = new Cure;
	AMateria		*teamFire = new Fire;
	ICharacter		*Cloud = new Character("Cloud");
	ICharacter		*Barret = new Character("Barret");
	ICharacter		*Aerith = new Character("Aerith");
	ICharacter		*Genova = new Character("Genova");
	AMateria		*newIce = teamIce->clone();

	std::cout << "........... Genova's Actions ..........." << std::endl;

	src->learnMateria(new Fire);
	src->learnMateria(new Ice);
	for(int i = 0; i < 2; i++)
	{
		Genova->equip(src->createMateria("fire"));
		Genova->equip(src->createMateria("ice"));
	}
	for(int i = 0; i < 4; i++)
	 	Genova->use(i, *Cloud);
	Genova->use(2, *Barret);

	std::cout << "........... Could's Actions ..........." << std::endl;
	Cloud->equip(teamIce);
	Cloud->equip(teamFire);
	Cloud->equip(newIce);
	for(int i = 0; i < 4; i++)
		Cloud->use(i, *Genova);
	for(int i = 0; i < 4; i++)
		Cloud->unequip(i);

	std::cout << "........... Barret's Actions ..........." << std::endl;
	Barret->equip(teamIce);
	Barret->equip(teamFire);
	Barret->equip(newIce);
	for(int i = 0; i < 4; i++)
		Barret->use(i, *Genova);
	Barret->unequip(2);	//--> we only removed newIce From Barret

		std::cout << "........... Aerith's Actions ..........." << std::endl;
	Aerith->equip(teamCure);
	Aerith->use(0, *Cloud);
	Aerith->use(0, *Barret);

	std::cout << "........... calling destructors ..........." << std::endl;
	delete Cloud;
	delete Genova;
	delete Barret;
	delete Aerith;
	delete src;
	delete newIce;	//--> we unequiped newIce from Barret, that' s why we have to delete manualy from the main;
}

void	CheckSubjectMain(){
	std::cout << "\n>>>>>>>>>> CheckSubjectMain test <<<<<<<<<<\n" << std::endl;

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
}

void	checkCaracterCpy(){
	AMateria		*MIce = new Ice;
	AMateria		*MCure = new Cure;
	AMateria		*MFire = new Fire;
	Character		Genova("Genova");
	Character		Peon("Peon");


	Genova.equip(MIce);
	Genova.equip(MCure);
	Genova.equip(MFire);
	for(int i = 0; i < 4; i++)
		Genova.use(i, Peon);

	Character		GenovaCpy(Genova);
	for(int i = 0; i < 4; i++)
	 	GenovaCpy.use(i, Peon);

	std::cout << "........... calling destructors ..........." << std::endl;
}

int	main( void ){
	checkMateriaSourceCreation();
	checkMateriaSource();
	checkCaracters();
	checkCaracterCpy();
	CheckSubjectMain();
}
