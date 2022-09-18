/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 18:36:43 by lchan             #+#    #+#             */
/*   Updated: 2022/09/18 17:52:04 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <fstream>
# include <string>
# include <cstdlib>

# define DEBUG_MESS "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !"
# define INFO_MESS "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger ! If you did, I wouldn't be asking for more !"
# define WARNI_MESS "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month."
# define COMPL_MESS "This is unacceptable ! I want to speak to the manager now."
# define KWN_PHRASE 4

class Harl{

	public:
		void	complain( std::string level );

	Harl( void );
	~Harl( void );

	private:
		std::string	s1;

		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );

};

#endif
