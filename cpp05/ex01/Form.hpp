/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:52:35 by chajax            #+#    #+#             */
/*   Updated: 2022/09/03 17:47:21 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		bool				_is_signed;
		const std::string 	_name;
		const int			_sign_rank;
		const int			_exec_rank;
	public:
		Form(void);
		Form(std::string name, int sign_rank, int exec_rank);
		~Form(void);
		Form(Form &copy);
		Form &operator=(const Form &rhs);
		const std::string		getName(void) const;
		int						getSignGrade(void) const;
		int						getExecGrade(void) const;
		const bool				getStatus(void) const;
		void					setStatus(bool status);
		void					beSigned(Bureaucrat &b);
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
	std::ostream	&operator<<(std::ostream &o, Form const &rhs);
#endif
