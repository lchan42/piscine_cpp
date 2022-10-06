/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Inventory.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 18:38:11 by lchan             #+#    #+#             */
/*   Updated: 2022/10/06 14:56:02 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INVENTORY_HPP
# define INVENTORY_HPP

#include "AMateria.hpp"

#define	DFT_STOCK 4
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
		int				checkInStock(std::string const &type);

	protected:

	private:
		int			index;
		int			maxStock;
		AMateria	**materia;
		void		clearStock();
		void		memSetNull();
};

#endif
