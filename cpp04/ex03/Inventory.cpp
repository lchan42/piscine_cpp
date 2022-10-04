/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Inventory.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 18:42:43 by lchan             #+#    #+#             */
/*   Updated: 2022/10/04 21:07:07 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Inventory.hpp"

/*************************************
 *		Constructor/Destructor
 * ***********************************/
Inventory::Inventory() : index(0), maxStock(DFT_STOCK), materia(new AMateria*[DFT_STOCK])
{
	//std::cout << "Inventory default constructor called" << std::endl;
}

Inventory::Inventory(int size) : index(0), maxStock(size), materia(new AMateria*[size])
{
	//std::cout << "Inventory default constructor called" << std::endl;
}

Inventory::Inventory(const Inventory& cpy)
{
	*this = cpy;
	std::cout << "Inventory cpy constructor called" << std::endl;
}

Inventory::~Inventory()
{
	std::cout << "Inventory destructor called" << std::endl;
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
 *			member Function
 * ***********************************/
void	Inventory::addMateria(AMateria* m)
{
	if (index < this->maxStock){
		for (int i; i < this->maxStock; i++)
			if (!this->materia[index])
			{
				this->materia[index] = m;
				break ;
			}
		this->index++;
	}
}

void	Inventory::removeMateria(int i){
	if (i < this->maxStock)
		this->materia[index] = NULL;
	index--;
}

// const Inventory* Inventory::getAddress( void )
// {
// 	return (this);
// }

void	Inventory::getAllStock( void )
{
	std::cout << "Materia inventory tab: " << std::endl;
	for (int i = 0; i < this->index; i++)
		std::cout << i << " : " << (*(this->materia[i])).getType() << std::endl;
}

// const std::string	Inventory::getIdea(int i)
// {
// 	if (i < MAX_STOCK)
// 		return (materia[i]);
// 	else
// 		return ("");
// }

void	Inventory::clearStock(){
		for (int i = 0; i < maxStock; i++)
			if (this->materia[i])
				delete this->materia[i];
}
