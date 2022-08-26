/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax42 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 00:25:22 by chajax42          #+#    #+#             */
/*   Updated: 2022/08/09 20:00:10 by chajax42         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	PhoneBook	pb;
	std::string	query;
	
	std::cout << "\nWelcome to your personal PhoneBook, thank you for choosing chajax software.\nPS: please don't press CTRL+D...🥺\n" << std::endl;
	while (pb.end == 0)
	{
		if (std::cin.eof() == true)
		{
			std::cout << "Oh, so you did it...I trusted you...exiting the program due to BROKEN TRUST😾😾😾..." << std::endl;
			return (42);
		}
		std::cout << "Please choose an option between ADD, SEARCH, or EXIT. 😋\n> ";
		getline(std::cin, query);
		if (query == "ADD")
		{
			if (pb.i < 7)
				pb.i++;
			pb.contacts[pb.i].add(pb.i);
			pb.total_contacts++;
		}
		else if (query == "SEARCH")
			pb.search();
		else if (query == "EXIT")
			pb.end = 1;
	}
	std::cout << "👋." << std::endl;
	return (0);
}
