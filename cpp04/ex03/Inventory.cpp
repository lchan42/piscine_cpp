/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Inventory.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 18:42:43 by lchan             #+#    #+#             */
/*   Updated: 2022/10/05 17:52:26 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Inventory.hpp"
#include <string.h>

/*************************************
 *		Constructor/Destructor
 * ***********************************/
Inventory::Inventory() : index(0), maxStock(DFT_STOCK), materia(new AMateria*[DFT_STOCK])
{
	memSetNull();
	std::cout << "[Inventory] default constructor called" << std::endl;
}

Inventory::Inventory(int size) : index(0), maxStock(size), materia(new AMateria*[size])
{
	memSetNull();
	std::cout << "[Inventory] size constructor called" << std::endl;
}

Inventory::Inventory(const Inventory& cpy)
{
	*this = cpy;
	std::cout << "[Inventory] cpy constructor called" << std::endl;
}

Inventory::~Inventory()
{
	this->clearStock();
	delete[] this->materia;
	std::cout << "[Inventory] destructor called" << std::endl;
}

/*************************************
 *				Overloads
 * ***********************************/
Inventory&	Inventory::operator=(const Inventory &rhs)
{

	//std::cout << "Inventory operator= called" << std::endl;
	this->clearStock();
	this->index = rhs.index;
	for(int i = 0; i < rhs.maxStock ; i++)
		this->materia[i] = rhs.materia[i];
	return (*this);
}

/*************************************
 *		public member Function
 * ***********************************/
void	Inventory::addMateria(AMateria* m)
{
	if (this->index < this->maxStock){

		for (int i = 0; i < this->maxStock; i++)
			if (!this->materia[i])
			{
				this->materia[i] = m;
				break ;
			}
		this->index++;
	}
}

void	Inventory::removeMateria(int i)
{
	if (i < this->maxStock)
	{
		this->materia[i] = NULL;
		index--;
	}
}

AMateria*	Inventory::getMateria(int idx)
{
	if (idx < this->maxStock)
		return (this->materia[idx]);
	std::cerr << "idx: " << idx << "incorrect" << std::endl;
	return (NULL);
}

void	Inventory::showAllStock( void )
{
	std::cout << "Materia inventory tab: " << std::endl;
	for (int i = 0; i < this->maxStock; i++)
	{
		if (this->materia[i])
			std::cout << i << " : " << (*(this->materia[i])).getType() << std::endl;
		else
			std::cout << i << " : [empty]" << std::endl;
	}
}

bool	Inventory::checkInStock(std::string const &type){
	for (int i = 0; i < this->maxStock; i++)
		if (this->materia[i] && this->materia[i]->getType() == type)
				return (1);
	return (0);
}

/*************************************
 *			private Function
 * ***********************************/
void	Inventory::clearStock(){
		for (int i = 0; i < this->maxStock; i++)
			if (this->materia[i])
				delete this->materia[i];
}

void	Inventory::memSetNull(){
	for (int i = 0; i < maxStock; i++)
		this->materia[i] = NULL;
}
