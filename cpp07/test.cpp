/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:34:08 by lchan             #+#    #+#             */
/*   Updated: 2022/10/20 16:57:11 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>



// template <typename T>
// T const & max(T const & x, T const & y) {
// 	return (x >= y ? x : y);
// }

// int main (){

// 	int	a = 21;
// 	int b = 42;

// 	std::cout << max<int>(a, b) << std::endl; //-> explicite
// 	std::cout << max(a, b) << std::endl; //-> implicite
// }

template <typename T> // je specifie a mon compilateur que je vais introduire un template de type T juste en dessous.
class List{

	List<T>();
	List<T>(List<T> const & list);
	~List<T>(void);

	private :

		T		_content;
		List<T>	*_next;
};


template <typename T = float> //--> instanciation d'un type par default si rien n'est specifie
class Vertex{

};



