/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 19:08:06 by lchan             #+#    #+#             */
/*   Updated: 2022/11/14 20:13:04 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <limits>
#include <climits>
#include <algorithm>
#include <exception>
#include <iostream>
#include <vector>
#include <list>

template <typename T>
typename T::iterator easyfind(T & InputContainer, int n)
{
    // typename T::iterator    it  = InputContainer.begin();
    typename T::iterator    ite = InputContainer.end();
   	typename T::iterator    ret;

    ret = find (InputContainer.begin(), ite, n);
    if (ret == ite)
        throw std::invalid_argument("val is not in container") ;
    else
        std::cout << n << " has been found" << std::endl;
    return (ret);
}

// template <typename T>
// typename T::iterator easyfind(T InputContainer, int n)
// {
//     typename T::iterator ite = InputContainer.end();
// 	typename T::iterator it = InputContainer.begin();
//    	typename T::iterator ret;

//     ret = find (it, ite, n);
//     if (ret == ite)
//         throw std::invalid_argument("n is not in container") ;
//     else
//         std::cout << n << " has been found" << std::endl;
//     return (ret);
// }
#endif