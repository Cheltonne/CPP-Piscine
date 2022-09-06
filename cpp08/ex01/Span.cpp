/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 17:11:21 by chajax            #+#    #+#             */
/*   Updated: 2022/09/06 18:14:48 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <vector>
#include <algorithm>

Span::Span(void)
{
	return ;
}

Span::Span(size_t N)
{
	this->_max = N;
	return ;
}

Span::Span(Span &cpy)
{
	operator=(cpy);
	return ;
}

Span::~Span(void)
{
	return ;
}

Span	&Span::operator=(const Span &rhs)
{
	if (this == &rhs)
		return (*this);
	this->_max = rhs._max;
	this->_vtr = rhs._vtr;
	return (*this);
}

void	Span::addNumber(int nb)
{
	if (this->_vtr.size() == this->_max)
		throw(std::length_error("The Span object is full. Cannot add any more numbers.\n"));
	this->_vtr.push_back(nb);
	return ;
}

void	Span::addNumber(std::vector<int> start, std::vector<int> end)
{
	if ((_v.size() + static_cast<int>(end - start)) < _size + 1)
   	{
		_v.insert(_v.end(), start, end);
       	std::cout << "Current size: " << _v.size() << std::endl;
    }
    else
		throw(std::length_error("The Span object is full. Cannot add any more numbers.\n"));
}

int	Span::shortestSpan(void) const
{
	if (this->_vtr.size() <= 1)
		throw(std::length_error("The Span object does not contain enough integers to generate any form of span.\n"));
    std::vector<int> vtr(this->_vtr);
    std::vector<int>::iterator it;

    std::sort(vtr.begin(), vtr.end());

    int count = 0;
    int save = *(vtr.end() - 1);
    for (it = vtr.begin(); it != vtr.end(); it++)
    {
        if (it != vtr.begin() && ((*it - count) < save))
            save = *it - count;
        count = *it;
    }
    return (save);
}

int	Span::longestSpan(void) const
{
	if (this->_vtr.size() <= 1)
		throw(std::length_error("The Span object does not contain enough integers to generate any form of span.\n"));
	std::vector<int> vtr(_vtr);
    std::vector<int>::iterator it;

    std::sort(vtr.begin(), vtr.end());
    return ((*(vtr.end() - 1) - *(vtr.begin())));
}
