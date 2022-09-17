/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 18:23:29 by lchan             #+#    #+#             */
/*   Updated: 2022/09/17 22:42:11 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <fstream>
# include <string>
# include <cstdlib>

const std::string	addReplaceToNAme(std::string name){
	return (name + ".replace");
}


int main(int ac, char **av){
	if(ac != 4)
		std::cerr << "missing args" << std::endl;

	std::ifstream	ifs(av[1]);
	std::string		s1 = av[2];
	std::string		s2 = av[3];
	std::size_t 	s1Len = s1.length();
	std::ofstream	ofs(addReplaceToNAme(av[1]).c_str());

	if (ifs && ofs)
	{
		std::string	line;
		while (std::getline(ifs, line).good())
		{
			std::size_t pos = line.find(s1);
			while (pos != std::string::npos)
			{
				line.erase (pos, s1Len);
				line.insert (pos, s2);
				std::cout << line << std::endl;
				pos = line.find(s1);
			}
			ofs << line;
		}
		ofs.close();
		ifs.close();
	}
	else
		std::cerr << "an unexpected error has occure\n" << std::endl;
	return (0);
}
