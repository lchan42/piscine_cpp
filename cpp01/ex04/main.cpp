/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 18:23:29 by lchan             #+#    #+#             */
/*   Updated: 2022/09/18 16:26:34 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Replace.hpp"

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		if (ac > 4)
			std::cerr << "too much args" << std::endl;
		else if (ac < 4)
			std::cerr << "missing args" << std::endl;
		return (-1);
	}
	Replace R = Replace(av[1], av[2], av[3]);
	R.creatReplace();
}

/*
const std::string	addReplaceToNAme(std::string name){
	return (name + ".replace");
}

int main(int ac, char **av){
	if (ac != 4)
	{
		std::cerr << "missing args" << std::endl;
		return (1);
	}
	std::ifstream	ifs(av[1]);
	std::string		s1 = av[2];
	std::string		s2 = av[3];
	std::size_t 	s1Len = s1.length();
	std::size_t 	s2Len = s2.length();
	std::ofstream	ofs(addReplaceToNAme(av[1]).c_str());

	if (!ifs)
	{
		std::cerr << "cant open file" << std::endl;
		return (1);
	}
	if (ifs && ofs)
	{
		std::string	line;
		while (!std::getline(ifs, line).eof())
		{
			std::size_t pos = line.find(s1);
			while (pos != std::string::npos)
			{
				line.erase (pos, s1Len);
				line.insert (pos, s2);
				pos = line.find(s1, pos + s2Len);
			}
			ofs << line << std::endl;
		}
		ofs << line;
		ofs.close();
		ifs.close();
	}
	else
		std::cerr << "an unexpected error has occure\n" << std::endl;
	return (0);
}
*/
