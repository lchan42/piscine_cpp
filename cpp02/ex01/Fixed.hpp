/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:10:19 by lchan             #+#    #+#             */
/*   Updated: 2022/09/20 19:10:51 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {

	public:
		Fixed();
		Fixed(Fixed const & src);
		Fixed(int  const i);// conv to fixed int
		Fixed(float const f);// conv to fixed int

		~Fixed();

		int		getRawBits( void ) const;
		void	setRawBits( int const raw);


		Fixed &	operator=(Fixed const & rhs );
		float toFloat( void ) const; //theorie : pour l'affichage ostream;
		int toInt( void ) const; //theorie : pour le operator, convertie la valeur en nombre entier et la place dans raw

	private:
		int					raw;
		static const int	fractional;
};

	std::ostream &	operator<<(std::ostream o, Fixed const & rhs);

#endif
