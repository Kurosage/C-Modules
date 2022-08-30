/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 00:06:15 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/30 18:18:28 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"
class Form;

class RobotomyRequestForm : public Form
{	
    private:
		std::string	target;
	public:
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm const &a);
		RobotomyRequestForm &operator = (RobotomyRequestForm const &a);
		
		std::string	getTarget( void ) const;
		void execute(Bureaucrat const & executor) const;

		class RobotomyFailed : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

};

#endif