/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 19:33:23 by lchan             #+#    #+#             */
/*   Updated: 2022/09/15 17:30:40 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "libraries.hpp"

# define INDEX "index"
# define FIRST "first name"
# define LAST "last name"
# define NICK "nickname"
# define PHONE "phone nbr"
# define SECRET "darkest secret"
# define EMPTY_MSG "empty line\n"

class Contact{
	public:

		Contact();
		~Contact();

		void				addLine();
		void				printTabLine(int limit) const;
		void				printContact() const;

	private:

		std::string			info[INFO_NBR];
		void				_printPrompt(int i) const;
		const std::string	&getInfo (int type) const;
		void				_emptyContact() ;
};

#endif
