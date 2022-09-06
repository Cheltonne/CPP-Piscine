/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 11:18:02 by chajax            #+#    #+#             */
/*   Updated: 2022/09/06 11:53:46 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template <typename T>
class Array
{
	private:
		unsigned int	_size;
		T				*_array;
	public:
		Array<T>(const unsigned int size): _size(size)
		{
			std::cout << "Size constructor called\n";        
			if (size <= 0)
				throw std::length_error("Invalid size");
			this->_array = new T[size];
		};
		Array<T>(void)
		{
			std::cout << "Default constructor called\n";
			this->_array = NULL;
			this->_size = 0;
		};
		unsigned int getSize(void) const
		{
			return (this->_size);
		}
		T &operator[](const unsigned int index)
		{
			if (index < 0 || index >= this->_size)
				throw (std::exception());
			return (this->_array[index]);
		}
		Array<T> (T &cpy)
		{
			std::cout << "Copy constructor called\n";
			*this = cpy;
			return (*this);
		}
		T &operator=(T const &rhs )
		{
			std::cout << "Assignement = operator called\n";
			if (*this == rhs)
				return (*this);
			if (this->_size > 0)
				delete [] this->_array;
			this->_size = rhs.getSize();
			this->_array = new T[this->_size];
			for (int i = 0; i < this->_array; i++)
				this->_array[i] = rhs[i];
			return (*this);
		}
		~Array()
		{
			std::cout << "Array destructor called" << '\n';
		};
};

#endif

