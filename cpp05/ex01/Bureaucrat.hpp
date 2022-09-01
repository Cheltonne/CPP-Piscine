/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:52:35 by chajax            #+#    #+#             */
/*   Updated: 2022/08/31 16:22:13 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>

class Bureaucrat
{
	protected:
		const std::string 	_name;
		int					_grade;
	public:
		Bureaucrat(void);
		Bureaucrat(const std::string &name);
		Bureaucrat(const std::string &name, int rank);
		~Bureaucrat(void);
		Bureaucrat(Bureaucrat &copy);
		Bureaucrat &operator=(const Bureaucrat &rhs);
		const std::string		getName(void) const;
		int						getGrade(void) const;
		void					setGrade(int rank);
		void					promote(void);
		void					demote(void);

		class GradeTooHighException: public std::exception
		{
			public :
				virtual const char *what() const throw()
				{
					return ("grade is too high\n");
				}
		};
		class GradeTooLowException: public std::exception
		{
			public :
				virtual const char *what() const throw()
				{
					return ("grade is too low\n");
				}
		};
};
	std::ostream	&operator<<(std::ostream &o, Bureaucrat const &rhs);
#endif
