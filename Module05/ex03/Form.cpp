/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 22:12:47 by rmaren            #+#    #+#             */
/*   Updated: 2022/09/01 16:01:42 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"

Form::~Form()
{
	std::cout << " Bureaucrat destructor called\n";
}

Form::Form(std::string name, int signGrade, int executeGrade) : name(name), signGrade(signGrade), executeGrade(executeGrade), signStatus(0)
{  
	if (signGrade > 150 || executeGrade > 150)
		throw (Form::GradeTooLowException());
	else if (signGrade < 1 || executeGrade < 1)
		throw (Form::GradeTooHighException());
	else
		std::cout <<  "Bureaucrat default constructor called\n";
}

Form::Form(Form const &a) : name(a.getName()), signGrade(a.getSignGrade()), executeGrade(a.getExecuteGrade()), signStatus(a.getSigned())
{
	std::cout << "Bureaucrat copy constructor called\n";
}

Form & Form::operator=(Form const &a)
{
	this->signStatus = a.getSigned();
	return (*this);
}

const std::string Form::getName( void ) const
{
	return (this->name);
}

int	Form::getSignGrade( void ) const
{
	return (this->signGrade);
}

int	Form::getExecuteGrade( void ) const
{
	return (this->executeGrade);
}

bool				Form::getSigned( void ) const
{
	return (this->signStatus);
}

const char* Form::Exception::what() const throw()
{
	return ("FormException");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Can't decrement grade\n");
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Can't increment grade\n");
};

const char* Form::UnsignedFormException::what() const throw()
{
	return ("Cannot execute an unsigned form");
};

std::ostream & operator<<( std::ostream & o, Form const & rhs)
{
	o << "Form " << rhs.getName() << " having a grade_to_sign " << rhs.getSignGrade() << " and a grade_to_execute "
		<< rhs.getExecuteGrade() << " with signed equal to " << rhs.getSigned();
	return (o);
}

void	Form::beSigned(Bureaucrat & ref)
{
	int	grade = ref.getGrade();

	if (grade > signGrade)
	{
		throw (Form::GradeTooLowException());
		return ;
	}
	signStatus = true;
	std::cout << *this << " was signed by the bureaucrat " << ref.getName() << " with a grade " << ref.getGrade() << std::endl;
}