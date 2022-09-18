/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 18:36:43 by lchan             #+#    #+#             */
/*   Updated: 2022/09/18 18:53:58 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <fstream>
# include <string>
# include <cstdlib>

# define DEBUG_MESS "I think I deserve to have some extra bacon for free."
# define INFO_MESS "I've been coming for years whereas you started working here since last month."
# define WARNI_MESS "This is unacceptable, I want to speak to the manager now."
# define COMPL_MESS "[ Probably complaining about insignificant problems ]"
# define KWN_PHRASE 4

class Harl{

	public:
		void	complain( std::string level );
		void	switchComplain ( std::string level );

	Harl( void );
	~Harl( void );

	private:
		std::string	s1;

		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
		void	switchHarl (int i);

};

#endif
