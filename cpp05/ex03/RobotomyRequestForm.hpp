/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:52:35 by chajax            #+#    #+#             */
/*   Updated: 2022/09/03 23:36:21 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include <iostream>
# include "Bureaucrat.hpp"
# include "Form.hpp"

class Bureaucrat;

class RobotomyRequestForm: public Form
{
	private:
		std::string			_target;
		bool				_is_signed = false;
		const int			_exec_rank = 137;
		const int			_sign_rank = 145;
		RobotomyRequestForm(void);
		RobotomyRequestForm(RobotomyRequestForm &copy);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);
	public:
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm(void);
		void	robotomize(void) const;
		void	execute(Bureaucrat const &executor) const;
		class	ExecException: public std::exception
		{
				public:
					virtual const char *what() const throw()
					{
						return ("Couldn't execute the form. Exec rank is too low.\n");
					}
		};
};
	int        randomize(int min, int max);
#endif
