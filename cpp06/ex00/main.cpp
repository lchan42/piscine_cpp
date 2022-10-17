/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 18:16:05 by lchan             #+#    #+#             */
/*   Updated: 2022/10/17 17:32:37 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int	main(int argc, char **argv){

	if (argc != 2)
	{
		std::cerr << "argc error" << std::endl;
		return (1);
	}

	std::string av = argv[1];
	//double d = strtod(argv[1], NULL);
	Convertor	conv(argv[1]);

	conv.convert();

	//std::cout << "double = " << d << std::endl;
}
