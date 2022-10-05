/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Inventory.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 18:38:11 by lchan             #+#    #+#             */
/*   Updated: 2022/10/05 15:01:31 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INVENTORY_HPP
# define INVENTORY_HPP

#include "AMateria.hpp"

#define	DFT_STOCK 4
//#define MAX_STOCK 4

class Inventory {
	public:
		Inventory();
		Inventory(int size);
		Inventory(const Inventory &cpy);
		~Inventory();

		Inventory&	operator=(const Inventory &rhs);

		void				addMateria(AMateria* m);
		void				removeMateria(int i);
		AMateria*			getMateria(int idx);

		void				showAllStock( void );
		bool				checkInStock(std::string const &type);
		//const Inventory*	getAddress( void );
		//const std::string	getIdea(int i);
	protected:

	private:
		int			index;
		int			maxStock;
		AMateria	**materia;
		void		clearStock();
		void		memSetNull();
};

#endif


// bool	MateriaSource::checkInStock(std::string const & type){

// 	for (int i = 0; i < STOCK_SIZE; i++)
// 		if(!type.empty() && type == this->_stock[i]->getType())
// 			return (1);
// 	return (0);
// }


