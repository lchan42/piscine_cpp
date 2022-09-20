/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:10:00 by lchan             #+#    #+#             */
/*   Updated: 2022/09/20 20:02:52 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : raw(0) {
	std::cout << "Default construtor called" << std::endl;

}

Fixed::Fixed(Fixed const & src) {
	std::cout << "Copy constructor called" << std::endl;

	*this = src;
}

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;

}




int		Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called" << std::endl;

	return (this->raw);
}

void	Fixed::setRawBits( int const raw){
	this->raw = raw;
}

Fixed &	Fixed::operator=(Fixed const & rhs){

	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->raw = rhs.getRawBits();

	return *this;
}

Fixed::Fixed(int const i){

	std::cout << "Int constructor called" << std::endl;

	this->setRawBits(i << this->fractional);
}

int Fixed::toInt( void ) const{

	return (this->raw >> this->fractional);
}

Fixed::Fixed(float const f){

	std::cout << "Float constructor called" << std::endl;
	int	mentisse = ((int)(f)) << 9 % 256;
	int	exposant = (int)f >> 23 % 2;z`
	int	sign = -1 ^ (int)f;

	this->setRawBits((int)f << this->fractional);
}
