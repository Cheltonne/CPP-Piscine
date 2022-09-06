/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 16:11:42 by chajax            #+#    #+#             */
/*   Updated: 2022/09/06 19:27:08 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
#include <iostream>
#include <vector>

class Span
{
	private:
		size_t				_max;
		std::vector<int>	_vtr;
	public:
		Span(void);
		Span(size_t N);
		Span(Span &cpy);
		~Span(void);
		Span	&operator=(const Span &rhs);
		void	addNumber(int nb);
		void    addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end);
		int		shortestSpan(void) const;
		int		longestSpan(void) const;
};
#endif
