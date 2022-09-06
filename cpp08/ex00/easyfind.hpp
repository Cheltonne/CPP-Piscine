/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 14:28:31 by chajax            #+#    #+#             */
/*   Updated: 2022/09/06 14:36:16 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <algorithm>

template <typename T>
typename T::iterator	easyfind(T &container, int toFind)
{
	typename T::iterator	res;

	res = find(container.begin(), container.end(), toFind);
	if (res == container.end())
		return (container.end());
	return (res);
}

#endif
