/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 19:33:23 by lchan             #+#    #+#             */
/*   Updated: 2022/09/13 19:34:04 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include "libraries.hpp"
# define ERR_MSG "possible inputs are ADD, SEARCH, EXIT. Please try again\n"

class PhoneBook{
	public:

		PhoneBook();
		~PhoneBook();

		void	usrImput(void);
		void	addContact(void);
		void	printAllContact(void);

	private:

		int		index;
		Contact	contactTab[8];

		Contact	*schContact(char *research) const;
		void	printTabHeader();
		void	exit(void);
};

#endif
