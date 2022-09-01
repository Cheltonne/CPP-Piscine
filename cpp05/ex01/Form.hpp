/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:52:35 by chajax            #+#    #+#             */
/*   Updated: 2022/09/01 17:03:48 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>

class Form
{
	private:
		bool				_is_signed = false;
		const std::string 	_name;
		const int			_sign_rank;
		const int			_exec_rank;
	public:
		Form(void);
		Form(const std::string &name);
		Form(const std::string &name, int sign_rank, int exec_rank);
		~Form(void);
		Form(Form &copy);
		Form &operator=(const Form &rhs);
		void					setName(std::string name);
		const std::string		getName(void) const;
		int						getSignGrade(void) const;
		void					setExecGrade(int rank);
		int						getExecGrade(void) const;
		void					setSignGrade(int rank);
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
