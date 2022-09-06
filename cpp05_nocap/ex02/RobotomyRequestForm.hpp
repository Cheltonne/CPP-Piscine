/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:52:35 by chajax            #+#    #+#             */
/*   Updated: 2022/09/06 00:31:40 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include <iostream>
# include <cstdlib>
# include "Bureaucrat.hpp"
# include "Form.hpp"

class Bureaucrat;

class RobotomyRequestForm: public Form
{
	private:
		std::string			_target;
		RobotomyRequestForm(void);
		RobotomyRequestForm(RobotomyRequestForm &copy);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);
	public:
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm(void);
		void	action(void) const;
};
	int        randomize(int min, int max);
#endif
