/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:52:35 by chajax            #+#    #+#             */
/*   Updated: 2022/09/06 02:20:13 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>

class Bureaucrat
{
	private:
		const std::string 	_name;
		int					_grade;
		void				setGrade(int rank);
		Bureaucrat(void);
		Bureaucrat(Bureaucrat &copy);
		Bureaucrat &operator=(const Bureaucrat &rhs);
	public:
		Bureaucrat(const std::string &name, int rank);
		~Bureaucrat(void);
		const std::string		getName(void) const;
		int						getGrade(void) const;
		void					promote(void);
		void					demote(void);
		class GradeTooHighException: public std::exception
		{
			public :
				virtual const char *what() const throw()
				{
					return ("The chosen rank is too high. Cannot set.\n");
				}
		};
		class GradeTooLowException: public std::exception
		{
			public :
				virtual const char *what() const throw()
				{
					return ("The chosen rank is too low. Cannot set.\n");
				}
		};
};
	std::ostream	&operator<<(std::ostream &o, Bureaucrat const &rhs);
#endif
