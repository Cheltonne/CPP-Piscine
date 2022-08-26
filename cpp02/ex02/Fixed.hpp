/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax42 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 21:46:53 by chajax42          #+#    #+#             */
/*   Updated: 2022/08/25 10:27:25 by chajax42         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class	Fixed
{
	private:
		int					_rawBits;
		const static int	_fBits = 8;
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(const Fixed &cpy);
		Fixed(const int nb);
		Fixed(const float nb);
		Fixed	&operator=(Fixed const &rhs);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		int		toInt(void) const;
		float	toFloat(void) const;
		bool	operator>(Fixed const &rhs) const;
		bool	operator<(Fixed const &rhs) const;
		bool	operator>=(Fixed const &rhs) const;
		bool	operator<=(Fixed const &rhs) const;
		bool	operator==(Fixed const &rhs) const;
		bool	operator!=(Fixed const &rhs) const;
		Fixed	operator+(Fixed const &rhs);
		Fixed	operator-(Fixed const &rhs);
		Fixed	operator*(Fixed const &rhs);
		Fixed	operator/(Fixed const &rhs);
		Fixed	&operator++(void);
		Fixed	operator++(int);
		Fixed	&operator--(void);
		Fixed	operator--(int);
		static Fixed	&min(Fixed &a, Fixed &b);
		static Fixed	const &min(Fixed const &a, Fixed const &b);
		static Fixed	&max(Fixed &a, Fixed &b);
		static Fixed	const &max(Fixed const &a, Fixed const &b);
};
	std::ostream	&operator<<(std::ostream &o, Fixed const &rhs);
#endif
