/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax42 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 23:29:11 by chajax42          #+#    #+#             */
/*   Updated: 2022/07/29 17:49:23 by chajax42         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <string>
# include <ctype.h>
# include "Contact.hpp"

class	PhoneBook
{
public:
	
	PhoneBook(void);
	~PhoneBook(void);

	int			i;
	int			end;
	Contact		contacts[8];
	int			total_contacts;

	Contact	add(std::string f, std::string l, std::string n, std::string nb, std::string s);
	void	search(void);

private:


};

#endif
