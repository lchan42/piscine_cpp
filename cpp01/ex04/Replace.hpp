/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 18:36:43 by lchan             #+#    #+#             */
/*   Updated: 2022/09/18 17:51:57 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <fstream>
# include <string>
# include <cstdlib>

class Replace{

	public:
		void	creatReplace();

	Replace(std::string f, std::string s1, std::string s2);
	~Replace( void );

	private:
		std::string		f;
		std::string		s1;
		std::string		s2;

		bool				checkIfstream(std::ifstream &ifs);
		bool				checkOfstream(std::ifstream &ifs, std::ofstream &ofs);
		const std::string	addReplaceToNAme(std::string name);
		void				fillOfs(std::ifstream &ifs, std::ofstream &ofs);
};

#endif
