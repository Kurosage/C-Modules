/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 00:06:00 by rmaren            #+#    #+#             */
/*   Updated: 2022/09/01 16:13:10 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential Pardon Form", 25, 5){
	this->target = target;
	std::cout << "Presidential Pardon Form ShrubberyCreationForm default constructor called\n";
}

PresidentialPardonForm::~PresidentialPardonForm(){
	std::cout << "Presidential Pardon Form destructor called\n";
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &a) : Form(a.getName(), a.getSignGrade(), a.getExecuteGrade()){
	this->target = a.getTarget();
	std::cout << "Presidential Pardon Form copy constructor called\n";
}

PresidentialPardonForm &PresidentialPardonForm::operator = (PresidentialPardonForm const &a){
	this->target = a.getTarget();
	std::cout << "Presidential Pardon Form copy assignment operator called\n";
	return (*this);
}

std::string	PresidentialPardonForm::getTarget( void ) const{
	return (this->target);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() == false)
		throw (Form::UnsignedFormException());
	else if (executor.getGrade() > this->getExecuteGrade())
		throw (Form::GradeTooLowException());
	else
		std::cout << this->target << " was pardonned by Zafod Beeblebrox\n";
		
}