/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 22:12:50 by rmaren            #+#    #+#             */
/*   Updated: 2022/09/01 15:51:06 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{	
    private:
		const std::string	name;
		const int			signGrade;
		const int			executeGrade;
		bool				signStatus;
	public:
		virtual ~Form();
		Form(std::string name, int signGrade, int executeGrade);
		Form(Form const &a);
		Form & operator=(Form const &a);

		const std::string	getName( void ) const;
		int					getSignGrade( void ) const;
		int					getExecuteGrade( void ) const;
		bool				getSigned( void ) const;

		class Exception : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public Form::Exception
		{
			public:
				virtual const char* what() const throw();
		};
		
		class GradeTooHighException : public Form::Exception
		{
			public:
				virtual const char* what() const throw();
		};

		class UnsignedFormException : public Form::Exception
		{
			public:
				virtual const char* what() const throw();
		};

		void	beSigned(Bureaucrat & ref);
		virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream & operator<<( std::ostream & o, Form const & rhs);

#endif