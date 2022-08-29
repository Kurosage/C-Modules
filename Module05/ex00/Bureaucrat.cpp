/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 19:09:26 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/29 22:32:29 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade){
    this->name = name;
    if (grade < 1){
        throw Bureaucrat::GradeTooHighException();
    }
    else if (grade > 150){
        throw Bureaucrat::GradeTooLowException();
    }
    else{
        this->grade = grade;
    }
	std::cout << "Bureaucrat default constructor called\n";
}
Bureaucrat::~Bureaucrat(){
	std::cout << "Bureaucrat destructor called\n";
}

Bureaucrat::Bureaucrat(const  Bureaucrat &a){
    this->name = a.getName();
    this->grade = a.getGrade();
	std::cout << "Bureaucrat copy constructor called\n";
}

Bureaucrat &Bureaucrat::operator=(const  Bureaucrat &a){
	this->grade = a.getGrade();
    std::cout << "Bureaucrat copy assignment operator called\n";
	return *this;
}

std::string	Bureaucrat::getName() const{
	return this->name;
}

int Bureaucrat::getGrade() const{
	return this->grade;
}
void Bureaucrat::incrementGrade()
{
	if (this->grade - 1 < 1)
		throw (Bureaucrat::GradeTooHighException());
	else
		this->grade--;
    std::cout << "Increment grade\n";

}

void Bureaucrat::decrementGrade()
{
	
	if (this->grade + 1 > 150)
		throw (Bureaucrat::GradeTooLowException());
	else
		this->grade++;
    std::cout << "Decrement grade\n";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("You can't decrement grade \n");
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("You can't increment grade\n");
}

std::ostream & operator <<( std::ostream &o, Bureaucrat const &a)
{
	o << " " <<a.getName() << ", bureaucrat grade " << a.getGrade() << "\n";
	return (o);
}

