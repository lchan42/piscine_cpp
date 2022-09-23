/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:10:24 by lchan             #+#    #+#             */
/*   Updated: 2022/09/23 12:22:28 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::fractional = 8;

int main( void ) {
	Fixed		g;
	Fixed const	h( 10 );
	Fixed const	c( 42.42f );
	Fixed const	d( h );
	Fixed		e( h );

	g = Fixed( 1234.4321f );

	std::cout << "\t\t >>> comparator overload test <<<" << std::endl;
	std::cout	<< "g = " << g << "	h = " << h << std::endl;
	std::cout	<< "\t" << "(g > h) ?" << ((g > h) ? "YES" : "NO") << "\t"
				<< "\t" << "(g < h) ?" << ((g < h) ? "YES" : "NO") << "\n" << std::endl;
	std::cout	<< "d = " << d << "	e = " << e << std::endl;
	std::cout	<< "\t" << "(d >= e) ?" << ((d >= e) ? "YES" : "NO") << "\t"
				<< "\t" << "(d <= e) ?" << ((d <= e) ? "YES" : "NO") << "\n" << std::endl;
	std::cout	<< "c = " << c << " h = " << h << std::endl;
	std::cout	<< "\t" << "(c >= h) ?" << ((c >= h) ? "YES" : "NO") << "\t"
				<< "\t" << "(c <= h) ?" << ((c <= h) ? "YES" : "NO") << "\n" << std::endl;

	std::cout << "\t\t >>> +-*/ overload test <<<" << std::endl;
	std::cout << "c = " << c << "	g = " << g << "	h = " << h << std::endl;
	std::cout << "g + g = " << g + g << std::endl;
	std::cout << "g + c = " << g + c << std::endl;
	std::cout << "g - g = " << g - g << std::endl;
	std::cout << "g - c = " << g - c << std::endl;
	std::cout << "g * h = " << g * h << std::endl;
	std::cout << "g / h = " << g / h << std::endl;
	std::cout << "c / h = " << (Fixed)c / h << "\n" << std::endl;

	std::cout << "\t\t >>> +-*/ pre/postfix increment test <<<" << std::endl;
	std::cout << "e = " << e << std::endl;
	std::cout << "e++ = " << e++ << std::endl;
	std::cout << "e = " << e << std::endl;
	std::cout << "e-- = " << e-- << std::endl;
	std::cout << "e = " << e << std::endl;

	std::cout << "++e = " << ++e << std::endl;
	std::cout << "e = " << e << std::endl;
	std::cout << "--e = " << --e << std::endl;
	std::cout << "e = " << e << "\n" << std::endl;

	// subject main
	std::cout << "\t\t >>> subject main test <<<" << std::endl;
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << "\n" << std::endl;

	return(0);
}
