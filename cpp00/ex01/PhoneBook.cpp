/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax42 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 23:29:15 by chajax42          #+#    #+#             */
/*   Updated: 2022/08/09 19:58:52 by chajax42         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(void)
{
	this->end = 0;
	this->total_contacts = 0;
	this->i = -1;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void	PhoneBook::search()
{
	std::string	index;

	if (this->total_contacts == 0)
	{
		std::cout << "No contacts have been added yet! 😤😤" << std::endl;
		return ;
	}
	std::cout << "|   INDEX  |FIRST NAME| LAST NAME| NICKNAME |\n|-------------------------------------------|" << std::endl;
	for (int i = 0; i < this->total_contacts; i++)
		this->contacts[i].preview();
	std::cout << "Please specify which contact you are looking for by inputing their (single digit) index: \n> ";
	std::getline(std::cin, index);
	if (index.length() > 1)
	{
		std::cout << "Huh...dude/dudette, I thought we agreed on a SINGLE, DIGIT? 🤨🤔🥱" << std::endl;
		return ;
		
	}
	if (isdigit(index[0]) == 0)
	{
		std::cout << "You didn't input a single digit! 🤨🤔🤪" << std::endl;
		return ;
	}
	if (index[0] - 48 < 1 || index[0] - 48 > this->total_contacts)
	{
		std::cout << "The index you've chosen is out of the range described above 😬🙄" << std::endl;
		return ;
	}
	this->contacts[index[0] - 49].show_full();
}
