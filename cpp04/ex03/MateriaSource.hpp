#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "Macro.hpp"
#include "Inventory.hpp"
//# define STOCK_SIZE 4

class MateriaSource : public IMateriaSource {
	public:
		MateriaSource();
		MateriaSource(MateriaSource &cpy);
		~MateriaSource();

		MateriaSource&	operator= (const MateriaSource & rhs);

		virtual void learnMateria(AMateria* m);
		virtual AMateria* createMateria(std::string const & type);

		private:

		Inventory		inventory;
		//	int			index;
		//	AMateria	*_stock[STOCK_SIZE];
		//	void		cleanStock();
		//	bool		checkInStock(std::string const & type);

};

#endif
