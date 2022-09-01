/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 19:09:26 by rmaren            #+#    #+#             */
/*   Updated: 2022/09/01 16:10:29 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	else if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else
	{
		this->grade = grade;
		std::cout << "Bureaucrat default constructor called\n";
	}
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called\n";
}

Bureaucrat::Bureaucrat(Bureaucrat const &a) : name(a.getName() + "_copy")
{
	this->grade = a.getGrade();
	std::cout << "Bureaucrat copy constructor called\n";
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const &a)
{
	this->grade = a.getGrade();
	std::cout << "Bureaucrat copy assignment operator called\n";
	return (*this);
}

void	Bureaucrat::incrementGrade( void )
{
	std::cout << "Incrementing grade\n";
	if (this->grade - 1 < 1)
		throw (Bureaucrat::GradeTooHighException());
	else
		this->grade--;
}

void	Bureaucrat::decrementGrade( void )
{
	std::cout << "Decrementing grade\n";
	if (this->grade + 1 > 150)
		throw (Bureaucrat::GradeTooLowException());
	else
		this->grade++;
}

const std::string Bureaucrat::getName( void ) const
{
	return (this->name);
}

int					Bureaucrat::getGrade( void ) const
{
	return (this->grade);
}

std::ostream & operator<<( std::ostream & o, Bureaucrat const & rhs)
{
	o << "Bureaucrat " << rhs.getName() << " has a grade " << rhs.getGrade() << std::endl;
	return (o);
}

const char* Bureaucrat::Exception::what() const throw()
{
	return ("BureaucratException");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Can't decrement grade\n");
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Can't increment grade\n");
};

void Bureaucrat::signForm(Form & ref)
{
	try
	{
		ref.beSigned(*this);
		std::cout << "Bureaucrat " << this->name << " with a grade " << this->grade << " succesfully signs \n";
	}
	catch (Form::Exception &e)
	{
		std::cout << "Bureaucrat " << this->name << " with a grade " << this->grade << " cannot sign " << ref << " because " << e.what() << "\n";
	}
}

void Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
		std::cout << this->name << " sucesfully executed " << form << "\n";
	}
	catch (Form::Exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}