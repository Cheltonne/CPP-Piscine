/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:52:35 by chajax            #+#    #+#             */
/*   Updated: 2022/09/06 02:20:50 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string 	_name;
		int					_grade;
		Bureaucrat(void);
		Bureaucrat(Bureaucrat &copy);
		Bureaucrat &operator=(const Bureaucrat &rhs);
		void					setGrade(int rank);
	public:
		Bureaucrat(const std::string &name, int rank);
		~Bureaucrat(void);
		const std::string		getName(void) const;
		int						getGrade(void) const;
		void					promote(void);
		void					demote(void);
		void					signForm(Form &Form);
		void					executeForm(Form const &form);
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
		class IsSigned: public std::exception
		{
			public :
				virtual const char *what() const throw()
				{
					return (" form is already signed.\n");
				}
		};
};
	std::ostream	&operator<<(std::ostream &o, Bureaucrat const &rhs);
#endif
