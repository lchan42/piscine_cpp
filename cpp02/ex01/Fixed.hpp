/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:10:19 by lchan             #+#    #+#             */
/*   Updated: 2022/09/22 15:17:37 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {

	public:
		Fixed();
		Fixed(Fixed const & src);
		Fixed(int  const i);
		Fixed(float const f);

		~Fixed();

		int		getRawBits( void ) const;
		void	setRawBits( int const raw);


		Fixed &	operator=(Fixed const & rhs );
		float	toFloat( void ) const;
		int		toInt( void ) const;

	private:
		int					raw;
		static const int	fractional;
};

	std::ostream&	operator<<(std::ostream& o, Fixed const & rhs);

#endif
