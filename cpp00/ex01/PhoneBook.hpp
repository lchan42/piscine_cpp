/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 19:33:23 by lchan             #+#    #+#             */
/*   Updated: 2022/09/13 18:35:27 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include "libraries.hpp"

class PhoneBook{
	public:

		PhoneBook();
		~PhoneBook();

		Contact	contactTab[8];
		Contact	*schContact(char *research) const;
		void	printAllContact(void);
		//void	printContact(void);
		void	printTabHeader();
		void	addContact(void);
		void	exit(void);

	private:

		int index;
};
#endif
