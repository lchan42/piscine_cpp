/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:07:35 by lchan             #+#    #+#             */
/*   Updated: 2022/10/20 19:42:15 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void	swap(T & swap_a, T & swap_b){
	T tmp;

	tmp = swap_a;
	swap_a = swap_b;
	swap_b = tmp;
}

template <typename T>
T	min(T &val1, T &val2){
	return ((val1 >= val2) ? val2 : val1);
}

template <typename T>
T	max(T &val1, T &val2){
	return ((val2 >= val1) ? val2 : val1);
}

#endif
