/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 19:33:23 by lchan             #+#    #+#             */
/*   Updated: 2022/09/15 14:53:59 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include "libraries.hpp"

# define WLC_MSG "Welcome to my awesome phonebook!"
# define DFL_MSG "input (ADD, SEARCH, EXIT): "
# define ERR_MSG "wrong input, please try again\n"
# define SCH_MSG "index (1-8): "
# define ERR_SCH "wrong index\n"
class PhoneBook{
	public:

		PhoneBook();
		~PhoneBook();

		void				usrImput(void);

	private:

		int					index;
		Contact				contactTab[8];
		std::string			input;

		void				_add(void);
		void				_search();
		int					_convstoi(std::string s);
		void				_printTabHeader();
		void				_printAllContact(void);


};

#endif
