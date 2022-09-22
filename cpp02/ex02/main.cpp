/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:10:24 by lchan             #+#    #+#             */
/*   Updated: 2022/09/22 18:16:04 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::fractional = 8;

int main( void ) {
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );
	Fixed		e( b );

	a = Fixed( 1234.4321f );


	if (a >= b)
		std::cout << "a >= b YES" << std::endl;
	else
		std::cout << "a >= b NO" << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;

	std::cout << "c = " << c << std::endl;
	std::cout << "a + a = " << a + a << std::endl;
	std::cout << "a + c = " << a + c << std::endl;

	std::cout << "a - a = " << a - a << std::endl;
	std::cout << "a - c = " << a - c << std::endl;

	std::cout << "a * b = " << a * b << std::endl;
	std::cout << "a / b = " << a / b << std::endl;


	std::cout << "e++ = " << e++ << std::endl;
	std::cout << "e = " << e << std::endl;
	std::cout << "e-- = " << e-- << std::endl;
	std::cout << "e = " << e << std::endl;

	std::cout << "++e = " << ++e << std::endl;
	std::cout << "e = " << e << std::endl;
	std::cout << "--e = " << --e << std::endl;
	std::cout << "e = " << e << std::endl;
	return 0;
}

/*
++(int)
int ++(void)
*/
