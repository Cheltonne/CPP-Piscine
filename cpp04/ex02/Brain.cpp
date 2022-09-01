/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:54:55 by chajax            #+#    #+#             */
/*   Updated: 2022/08/28 18:05:59 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "🧠Brain default constructor called.🧠\n";
	return ;
}

Brain::~Brain(void)
{
	std::cout << "🧠Brain destructor called.🧠\n";
	return ;
}

Brain::Brain(Brain &copy)
{
	std::cout << "🧠Brain copy constructor called.🧠\n";
	for (int i = 0; i < 100; i++)
		copy.ideas[i] = this->getIdeas(i);
}

Brain	&Brain::operator=(Brain const &rhs)
{
	std::cout << "🧠Copy asignment operator called.🧠\n";
	for (int i = 0; i < 100; i++)
		this->ideas[i] = rhs.getIdeas(i);
	return (*this);
}

std::string	Brain::getIdeas(int i) const
{
	return (this->ideas[i]);
}
