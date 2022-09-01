/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 16:52:39 by rmaren            #+#    #+#             */
/*   Updated: 2022/09/01 16:52:48 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Form;

class Intern
{
	public:

		Intern();
		~Intern();
		Intern(Intern const & ref);
		Intern & operator=(Intern const & ref);
		Form *makeForm(std::string form_name, std::string form_target);

		class Exception : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

#endif