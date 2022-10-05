#include "Character.hpp"
#include <iomanip>
/******************************
 *		Coplien Form
 * ****************************/
Character::Character() {

	std::cout << "[Character] default constructor called" << std::endl;
}

Character::Character(std::string name) : _name(name){

	std::cout << "[Character] named constructor called" << std::endl;
}

Character::Character(Character &cpy){
	*this = cpy;
	std::cout << "[Character] cpy constructor called" << std::endl;
}

Character::~Character(){
	std::cout << "[Character] destructor called" << std::endl;
}

Character&	Character::operator=(const Character& rhs){

		this->inventory = rhs.inventory;
	return (*this);
}

/******************************
 *		Member function
 * ****************************/
std::string const &	Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria* m)
{
	this->inventory.addMateria(m);
}

void	Character::unequip(int idx)
{
	this->inventory.removeMateria(idx);
}

void	Character::use(int idx, ICharacter& target)
{
	AMateria* materiaInUse = this->inventory.getMateria(idx);
	if (materiaInUse)
	{
		std::cout << std::setw(17) << "~" + this->_name + "~"<< std::endl;
		materiaInUse->use(target);
	}
	else
		std::cerr << "use err: using idx " << idx << " does nothing" << std::endl;
}
