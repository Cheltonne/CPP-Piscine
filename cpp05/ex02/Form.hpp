/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:52:35 by chajax            #+#    #+#             */
/*   Updated: 2022/09/04 11:10:32 by chajax           ###   ########.fr       */
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
		virtual	void		action(void) const;
	public:
		Form(void);
		Form(Form &copy);
		Form(std::string name, int sign_rank, int exec_rank);
		virtual ~Form(void) = 0;
		virtual Form &operator=(const Form &rhs);
		const std::string		getName(void) const;
		virtual int				getSignGrade(void) const;
		virtual int				getExecGrade(void) const;
		virtual const bool		getStatus(void) const;
		virtual void			setStatus(bool status);
		virtual void			beSigned(Bureaucrat &b);
		void					execute(Bureaucrat const &executor) const;
		class GradeTooHighException: public std::exception
		{
			public :
				virtual const char *what() const throw()
				{
					return ("grade is too high.\n");
				}
		};
		class GradeTooLowException: public std::exception
		{
			public :
				virtual const char *what() const throw()
				{
					return ("grade is too low.\n");
				}
		};
		class FormIsNotSigned: public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("the form isn't signed.\n");
				}
		};
};
	std::ostream	&operator<<(std::ostream &o, Form const &rhs);
#endif
