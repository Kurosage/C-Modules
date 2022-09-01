/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 19:09:23 by rmaren            #+#    #+#             */
/*   Updated: 2022/09/01 15:46:40 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include <iostream>
#include <string>
#include "Form.hpp"
class Form;
class Bureaucrat
{
    private:
		const std::string	name;
		int					grade;
	public:
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();
		Bureaucrat(Bureaucrat const &a);
		Bureaucrat & operator=(Bureaucrat const &a);

		void				incrementGrade( void );
		void				decrementGrade( void );
		const std::string	getName( void ) const;
		int					getGrade( void ) const;
		class Exception : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public Bureaucrat::Exception
		{
			public:
				virtual const char* what() const throw();
		};
		
		class GradeTooHighException : public Bureaucrat::Exception
		{
			public:
				virtual const char* what() const throw();
		};

		void signForm(Form & ref);
		void executeForm(Form const & form);

};

std::ostream & operator<<( std::ostream & o, Bureaucrat const & rhs);


#endif