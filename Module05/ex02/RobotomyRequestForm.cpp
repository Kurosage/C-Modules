/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 00:05:32 by rmaren            #+#    #+#             */
/*   Updated: 2022/09/01 16:14:26 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>


RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy Request Form", 72, 45)
{
	this->target = target;
	std::cout << "RobotomyRequestForm default constructor called\n";
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called\n";
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &a) : Form(a.getName(), a.getSignGrade(), a.getExecuteGrade())
{
	this->target = a.getTarget();
	std::cout << "RobotomyRequestForm copy constructor called\n";
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const &a)
{
	this->target = a.getTarget();
    std::cout << "RobotomyRequestForm copy assignment operator called\n";
	return (*this);
}

std::string	RobotomyRequestForm::getTarget( void ) const{
	return (this->target);
}

const char* RobotomyRequestForm::RobotomyFailed::what() const throw()
{
	return ("\x1B[1;34mRobotomy failure\033[0m\n");
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() == false)
		throw (Form::UnsignedFormException());
	else if (executor.getGrade() > this->getExecuteGrade())
		throw (Form::GradeTooLowException());	
	int success = std::rand() % 2; // Random number between 0 and 1
	std::cout << "< intensive drilling noises >\n";
	if (success == 1)
	{
		std::cout << this->target << " has been robotomized" << std::endl;
	}
	else
		throw (RobotomyRequestForm::RobotomyFailed());
}