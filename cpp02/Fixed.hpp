/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:10:19 by lchan             #+#    #+#             */
/*   Updated: 2022/09/20 15:56:15 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>


class Fixed {

	public:
		Fixed();
		Fixed(Fixed const & src);
		~Fixed();

		int		getRawBits( void ) const;
		void	setRawBits( int const raw);

		Fixed &	operator=(Fixed const & rhs );

	private:
		int					raw;
		static const int	exposant;
};



#endif
