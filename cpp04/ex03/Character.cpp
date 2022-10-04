#include "Character.hpp"

Character::Character() {

	std::cout << "Character default constructor called" << std::endl;
}

Character::Character(Character &cpy){
	*this = cpy;
	std::cout << "Character default constructor called" << std::endl;
}

Character::~Character(){
	std::cout << "Character destructor called" << std::endl;
}

Character&	Character::operator=(const Character& rhs){

		this->inventory = rhs.inventory;
	return (*this);
}

std::string const &	Character::getName() const{
	return (this->_name);
}

void 				Character::equip(AMateria* m){}
void 				Character::unequip(int idx){}
void 				Character::use(int idx, ICharacter& target){}
