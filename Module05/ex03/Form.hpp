/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 16:51:51 by rmaren            #+#    #+#             */
/*   Updated: 2022/09/01 16:52:08 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form();
		virtual ~Form();
		Form(std::string name, int grade_to_sign, int grade_to_execute);
		Form(Form const & ref);
		Form & operator=(Form const & ref);

		const std::string	getName( void ) const;
		int					getGradeToSign( void ) const;
		int					getGradeToExecute( void ) const;
		bool				getSigned( void ) const;
		void				setSigned( const bool new_value);
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
		void	be_signed(Bureaucrat & ref);
		virtual void execute(Bureaucrat const & executor) const = 0;

	private:
		const std::string	_name;
		const int			_grade_to_sign;
		const int			_grade_to_execute;
		bool				_signed;
};

std::ostream & operator<<( std::ostream & o, Form const & rhs);

#endif