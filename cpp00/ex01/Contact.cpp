/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax42 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 21:49:08 by chajax42          #+#    #+#             */
/*   Updated: 2022/07/28 19:30:33 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::Contact(int i, std::string f, std::string l, std::string n,
std::string nb, std::string s) : id(i), fname(f), lname(l), nname(n),
num(nb), secret(s)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void	Contact::add(int i)
{
	std::string	arg[5];
	bool		no_empty_fields = false;

	while (no_empty_fields == false)
	{
		std::cout << "Please enter new contact's first name: \n> ";
		std::getline(std::cin, arg[0]);
		std::cout << "Please enter new contact's last name: \n> ";
		std::getline(std::cin, arg[1]);
		std::cout << "Please enter new contact's nickname: \n> ";
		std::getline(std::cin, arg[2]);
		std::cout << "Please enter new contact's phone number: \n> ";
		std::getline(std::cin, arg[3]);
		std::cout << "Please enter new contact's...darkest secret: \n> ";
		std::getline(std::cin, arg[4]);
		for (int o = 0; o < 5; o++)
			if (arg[o].empty() == true)
			{
				std::cout << "No field can be left empty, please start over!" << std::endl;
				break;
			}
		this->id = i;
		no_empty_fields = true;
	}
	this->fname = arg[0];
	this->lname = arg[1];
	this->nname = arg[2];
	this->num = arg[3];
	this->secret = arg[4];
	return ;
}

void	Contact::preview(void)
{
	std::string str[4];

	str[0].resize(9, ' ');
	str[0] += this->id + 49;
	str[1] += this->fname;
	str[2] += this->lname;
	str[3] += this->nname;
	for (int i = 1; i < 4; i++)
	{
		if (str[i].length() < 10)
			str[i].insert(0, 10 - str[i].length(), ' ');
		else if (str[i].length() > 10)
		{
			str[i].erase(9, std::string::npos);
			str[i].append(".");
		}
	}
	std::cout << "|";
	for (int o = 0; o < 4; o++)
		std::cout << str[o] << '|';
	std::cout << std::endl;
}

void	Contact::show_full(void) const
{
	std::cout << "Full Name: " << this->fname << std::endl;
	std::cout << "Last Name: " << this->lname << std::endl;
	std::cout << "Nickname: " << this->nname << std::endl;
	std::cout << "Phone number: " << this->num << std::endl;
	std::cout << "Darkest Secret: " << this->secret << std::endl;
}
