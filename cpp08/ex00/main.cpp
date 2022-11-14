/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 19:41:31 by lchan             #+#    #+#             */
/*   Updated: 2022/11/14 20:25:06 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

# define VAL1 101
# define VAL2 102
# define VALERR 103

template <typename T>
void    addRdnNumber(T & input)
{
    try{
        for (int i = 0; i < 10; i++)
            input.push_back((rand() % 100));
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
}

template <typename T>
void	displayStack(std::string name, T type)
{
	typename T::iterator ite = type.end();
	typename T::iterator it = type.begin();

 	std::cout << "... displaying " << name << " ..." << std::endl;
	for (it; it != ite; ++it)
		std::cout << *it << " ";
	std::cout << "\n" << std::endl;
}

template <typename T>
void    tryEasyFind(T &input, int needle)
{
    try {
        easyfind(input, needle);
    }
        catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
}

int main ()
{
    srand((unsigned) time(NULL));
    std::list<int>      lst;

    addRdnNumber(lst);
    lst.push_back(VAL1);
    lst.push_front(VAL2);

    displayStack("lst", lst);
    
    tryEasyFind(lst, VAL1);
    tryEasyFind(lst, VAL2);
    tryEasyFind(lst, VALERR);
}