/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:10:19 by lchan             #+#    #+#             */
/*   Updated: 2022/09/23 11:58:26 by lchan            ###   ########.fr       */
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

		int					getRawBits( void ) const;
		void				setRawBits( int const raw);
		int					toInt( void ) const;
		float				toFloat( void ) const;
		static Fixed		min(Fixed &a, Fixed &b);
		static const Fixed	min(Fixed const &a, Fixed const &b);
		static Fixed		max(Fixed &a, Fixed &b);
		static const Fixed	max(Fixed const &a, Fixed const &b);

		Fixed &	operator=(Fixed const & rhs );
		Fixed	operator+(Fixed const & rhs );
		Fixed	operator-(Fixed const & rhs );
		Fixed	operator*(Fixed const & rhs );
		Fixed	operator/(Fixed const & rhs );
		bool	operator>(Fixed const & rhs) const;
		bool	operator<(Fixed const & rhs) const;
		bool	operator>=(Fixed const & rhs) const;
		bool	operator<=(Fixed const & rhs) const;
		bool	operator==(Fixed const & rhs) const;
		bool	operator!=(Fixed const & rhs) const;
		Fixed &	operator++(void);
		Fixed	operator++(int i);
		Fixed &	operator--(void);
		Fixed	operator--(int i);

	private:
		int					raw;
		static const int	fractional;
};

	std::ostream&	operator<<(std::ostream& o, Fixed const & rhs);


#endif
