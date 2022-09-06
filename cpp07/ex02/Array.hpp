/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 11:18:02 by chajax            #+#    #+#             */
/*   Updated: 2022/09/06 13:41:51 by chajax           ###   ########.fr       */
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
		unsigned int size(void) const
		{
			return (this->_size);
		}

		T	&operator[](const size_t index)
		{
			if (index < 0 || index >= this->_size)
				throw (std::exception());
			return (this->_array[index]);
		}
		Array<T>	&operator=(const Array<T> &rhs )
		{
			std::cout << "Assignment = operator called\n";
			if (this == &rhs)
				return (*this);
			this->_size = rhs.size();
			this->_array = new T[this->_size];
			for (size_t i = 0; i < this->size(); i++)
				this->_array[i] = rhs._array[i];
			return (*this);
		}

		Array<T> (Array<T> &cpy)
		{
			std::cout << "Copy constructor called\n";
			*this = cpy;
			return (*this);
		}

		~Array()
		{
			std::cout << "Array destructor called" << '\n';
			std::cout << "Array size = " << size() << '\n';
			if (this->size() > 0)
				delete [] (this->_array);
		};
};

#endif

