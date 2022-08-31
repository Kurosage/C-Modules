/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 00:06:00 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/30 18:22:34 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential Pardon Form", 25, 5){
	this->target = target;
	std::cout << "Presidential Pardon Form" << *this << " has beed constructed\n";
}

PresidentialPardonForm::~PresidentialPardonForm(){
	std::cout << "Presidential Pardon destructor called\n";
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &a) : Form(a.getName(), a.getSignGrade(), a.getExecuteGrade()){
	this->target = a.getTarget();
	std::cout << "Presidential Pardon copy constructor called\n";
}

PresidentialPardonForm &PresidentialPardonForm::operator = (PresidentialPardonForm const &a){
	this->target = a.getTarget();
	std::cout << "Presidential Pardon copy assignment operator called\n";
	return (*this);
}

std::string	PresidentialPardonForm::getTarget( void ) const{
	return (this->target);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getSign() == false)
		throw (Form::FormWasNotSignedException());
	else if (executor.getGrade() > this->getExecuteGrade())
		throw (Form::GradeTooLowException());
	else
		std::cout << this->target << " has been pardoned by Zaphod Beeblebrox\n";
}