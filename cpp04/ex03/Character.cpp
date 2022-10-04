#include "Character.hpp"

Character::Character() : inventory(new AMateria*[INVENTORY_SIZE]) {

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

	for(int i = 0; i < INVENTORY_SIZE; i++)
		unequip(i);
	for(int i = 0; i < INVENTORY_SIZE; i++)
		this->inventory[i] = rhs.inventory[i];
	return (*this);
}

