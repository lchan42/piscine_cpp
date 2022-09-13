/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 19:33:23 by lchan             #+#    #+#             */
/*   Updated: 2022/09/13 19:14:28 by lchan            ###   ########.fr       */
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

class Contact{
	public:

		Contact();
		~Contact();

		const std::string	&getInfo (int type) const;
		void				addLine();
		void				printLine(int limit);

	private:

		std::string			info[INFO_NBR];
		void				printPrompt(int i) const;
};

#endif

		// std::cout << MaString << std::endl;

		// std::string mastring;
		// std::string mastring("test");
		// std::string mastring2 = mastring;
		// if (mastring.empty())
		// int *i;
		// (*i)
