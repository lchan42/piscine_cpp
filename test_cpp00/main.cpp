/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 16:15:11 by lchan             #+#    #+#             */
/*   Updated: 2022/09/12 18:41:13 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.hpp"
#include "iostream"

/*
int	main()
{
	Sample test;
	return (0);
}
*/
/*
int	main(void)
{
	char buf[512];

	std::cout << "enter something: " << std::endl << std::endl;
	std::cin >> buf;
	std::cout << "you entered [" << buf << "]" << std::endl;
}
*/
/*
int main(void)
{
	Sample s_test;;

	std::cout << "s_test.test_var has been set by constructor: " << s_test.test_var << std::endl;
	s_test.test_var = 10;
	std::cout << "s_test.test_var has been set main function: " << s_test.test_var << std::endl;


	s_test.test_function();
}
*/

/*
int main(void)
{
	Sample2 s2(1, 24, 4.2);
	Sample2 s3(1, 24, 4.2);
	s2.setVar(100);
	s3.setVar(150);
	std::cout << s2.getVar() << std::endl;

	if (s2.compareVar(&s3) == 1)
		std::cout << "s2.var seems to be smaller than s3.var" << std::endl;

	std::cout << s2.getVar() << std::endl;

	return (0);
}
*/

/*
int	main (void)
{
	Sample3 s1;
	Sample3 s2;

	std::cout << "s1 _nbInst = " << Sample3::getnbInst() << std::endl;
}
*/

int	main(void)
{
	Sample4	s4;
	Sample4	*p_s4 = &s4;

	int		Sample4::*ptr = NULL; //declaration d'un pointeur, on ne sait pas encore ou il pointe
	void	(Sample4::*f_p)(void)const;

	ptr = &Sample4::foo; // on sait mtn sur quelle variable pointe ptr; C'est un pointeur general reutilisable entre instance de meme classe

	std::cout << "Value of Sample::foo = " << s4.foo << std::endl;
	s4.*ptr = 21;
	std::cout << "Value of Sample::foo after reassognation= " << s4.foo << std::endl;
	p_s4->*ptr = 42;
	std::cout << "Value of Sample::foo after reassognation by ->*= " << s4.foo << std::endl;

	f_p = &Sample4::bar;

	(s4.*f_p)();
	(p_s4->*f_p)();

	return(0);
}
