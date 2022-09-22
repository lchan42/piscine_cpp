/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:10:00 by lchan             #+#    #+#             */
/*   Updated: 2022/09/22 18:14:53 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/********************************* constuctor *********************************/
Fixed::Fixed(void) : raw(0) {

	// std::cout << "Default construtor called" << std::endl;
}

Fixed::Fixed(Fixed const & src) {

	// std::cout << "Copy constructor called" << std::endl;

	*this = src;
}

Fixed::Fixed(int const i){

	// std::cout << "Int constructor called" << std::endl;

	this->setRawBits(i << this->fractional);
}

Fixed::Fixed(float const f){

	// std::cout << "Float constructor called" << std::endl;

	this->setRawBits((roundf(f * (1 << this->fractional))));
}

Fixed::~Fixed(void){
	// std::cout << "Destructor called" << std::endl;

}

/********************************* setter getter *********************************/
int		Fixed::getRawBits( void ) const{
	//std::cout << "getRawBits member function called" << std::endl;

	return (this->raw);
}

void	Fixed::setRawBits( int const raw){
	this->raw = raw;
}


/********************************* operator overload *********************************/

// comparison operators
bool	Fixed::operator>(Fixed const & rhs) const {
	return((this->raw > rhs.getRawBits()) ? 1 : 0);
}

bool	Fixed::operator<(Fixed const & rhs) const {
	return((this->raw < rhs.getRawBits()) ? 1 : 0);
}

bool	Fixed::operator>=(Fixed const & rhs) const {
	return((this->raw >= rhs.getRawBits()) ? 1 : 0);
}

bool	Fixed::operator<=(Fixed const & rhs) const {
	return((this->raw <= rhs.getRawBits()) ? 1 : 0);
}

bool	Fixed::operator==(Fixed const & rhs) const {
	return((this->raw == rhs.getRawBits()) ? 1 : 0);
}

bool	Fixed::operator!=(Fixed const & rhs) const {
	return((this->raw != rhs.getRawBits()) ? 1 : 0);
}

// arithmétiques operators
Fixed &	Fixed::operator=(Fixed const & rhs){

	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->raw = rhs.getRawBits();

	return *this;
}

Fixed	Fixed::operator+(Fixed const & rhs ){
	Fixed	result(this->toFloat() + rhs.toFloat());

	return (result);
}

Fixed	Fixed::operator-(Fixed const & rhs ){
	Fixed	result(this->toFloat() - rhs.toFloat());

	return (result);
}

Fixed	Fixed::operator*(Fixed const & rhs ){
	Fixed	result(this->toFloat() * rhs.toFloat());

	return (result);
}

Fixed	Fixed::operator/(Fixed const & rhs ){
	Fixed	result(this->toFloat() / rhs.toFloat());

	return (result);
}

// increment operators

		//prefix increment operator
Fixed &	Fixed::operator++(void){
	this->raw++;

	return (*this);
}

		//postfix increment operator
Fixed	Fixed::operator++(int i){

	Fixed	tmp(*this);

	if (i)
 		this->raw += i;
	else
		this->raw++;
	return (tmp);
}

		//prefix increment operator
Fixed &	Fixed::operator--(void){
	this->raw--;

	return (*this);
}

		//postfix increment operator
Fixed	Fixed::operator--(int i){

	Fixed	tmp(*this);

	if (i)
 		this->raw -= i;
	else
		this->raw--;
	return (tmp);
}




/********************************* iner function *********************************/

int Fixed::toInt( void ) const{

	return (this->raw >> this->fractional);
}

float Fixed::toFloat ( void ) const{

	return (((float)this->raw / (1 << this->fractional)));
}


/********************************* operator overload *********************************/
std::ostream&	operator<<(std::ostream& o, Fixed const & rhs){

	o << rhs.toFloat();
	return o;
}
