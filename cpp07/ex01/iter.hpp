/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:42:36 by lchan             #+#    #+#             */
/*   Updated: 2022/10/20 19:41:37 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <cctype>

template<typename T>
void	printString(const T &s){
	std::cout << s << std::endl;
}

template<typename T>
void	iter(T *tab, int size, void (*f)(const T &)){
	for (int i = 0; i < size; i++)
		f(tab[i]);
}

#endif
