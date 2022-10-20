/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:06:57 by lchan             #+#    #+#             */
/*   Updated: 2022/10/20 18:41:38 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "whatever.hpp"

int	main(){
	int val1 = 199;
	int val2 = 200;

	float f1 = 1.32423;
	float f2 = 1.5;

	std::cout << "max = " << max(f1, f2) << std::endl;
	std::cout << "min = " << min(f1, f2) << std::endl;
	std::cout << "min = " << min(f1, f2) << std::endl;

	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}
