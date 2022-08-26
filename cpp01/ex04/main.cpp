/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax42 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 15:32:24 by chajax42          #+#    #+#             */
/*   Updated: 2022/08/17 18:45:16 by chajax42         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Wrong number of arguments.\nThe program takes three parameters\
 in the following order: a filename and two strings, s1 and s2.😅\n";
		return (0);
	}
	std::string		new_name = av[1];
	std::ifstream	rd(av[1]);
	std::string		content;
	std::string		s1;
	std::string		s2;
	size_t			pos;

	if (rd.peek() == -1)
	{
		std::cout << "Error. Please check that the given file exists, is not a directory or empty file, and that you have the correct rights.\n";
		return (0);
	}
	std::getline(rd, content);
	s1.assign(av[2]);
	s2.assign(av[3]);
	for (size_t i = 0; i < content.size(); i += s2.size())
	{
		pos = content.find(s1, i);
		if (pos == std::string::npos || s1.size() == 0)
			break;
		else
		{
			content.erase(pos, s1.size());
			content.insert(pos, s2);
		}
	}
	new_name += ".replace";
	std::ofstream	ret(new_name.c_str());
	ret << content + '\n';
	rd.close();
	ret.close();
}
