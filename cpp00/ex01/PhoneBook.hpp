/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 19:33:23 by lchan             #+#    #+#             */
/*   Updated: 2022/09/14 15:59:42 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include "libraries.hpp"

# define ERR_MSG "possible inputs are ADD, SEARCH, EXIT. Please try again\n"
# define SCH_MSG "enter contact index (1 - 8): "
# define ERR_SCH "index MUST be between 1 and 8\n"

class PhoneBook{
	public:

		PhoneBook();
		~PhoneBook();

		void	usrImput(void);

	private:

		int					index;
		Contact				contactTab[8];
		std::string			input;
		std::stringstream	stream;

		void	addContact(void);
		void	printAllContact(void);
		void	printOneContact();
		void	printTabHeader();
		void	exit(void);
		Contact	*schContact(char *research) const;
};

#endif
