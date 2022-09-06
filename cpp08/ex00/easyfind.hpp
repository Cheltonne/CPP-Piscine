/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 14:28:31 by chajax            #+#    #+#             */
/*   Updated: 2022/09/06 15:46:34 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <algorithm>

template <typename T>
typename T::iterator	easyfind(T &container, int toFind)
{
	typename T::iterator	ret;

	ret = find(container.begin(), container.end(), toFind);
	if (ret == container.end())
		throw (std::length_error("\033[31mDid not find any occurence of toFind in container.\n\033[37m"));
	return (ret);
}

#endif
