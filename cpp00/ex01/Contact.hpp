/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax42 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 21:59:01 by chajax42          #+#    #+#             */
/*   Updated: 2022/07/29 17:49:55 by chajax42         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <string>
# include <sstream>

class	Contact
{
public:

	Contact(void);
	Contact(int i, std::string f, std::string l, std::string n,
	std::string nb, std::string s);
	~Contact(void);

	void		add(int	i);
	void		preview(void);
	void		show_full(void) const;

private:

	int			id;
	std::string	fname;
	std::string	lname;
	std::string	nname;
	std::string	num;
	std::string	secret;
};

#endif
