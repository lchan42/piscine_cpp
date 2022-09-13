/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 19:33:23 by lchan             #+#    #+#             */
/*   Updated: 2022/09/13 18:31:43 by lchan            ###   ########.fr       */
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


		void				printPrompt(int i) const;
		const std::string	&getInfo (int type) const;
		void				addLine();
		void				printLine();

		// std::cout << MaString << std::endl;

		// std::string mastring;
		// std::string mastring("test");
		// std::string mastring2 = mastring;
		// if (mastring.empty())
		// int *i;
		// (*i)

	private:
		std::string info[INFO_NBR];
};

#endif
