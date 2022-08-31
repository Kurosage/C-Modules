/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 22:12:47 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/31 16:35:32 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int signGrade, int executeGrade){
    this->name = name;
    if (signGrade < 1 || executeGrade < 1){
        throw Form::GradeTooHighException();
    }
    else if (signGrade > 150 || executeGrade >150){
        throw Form::GradeTooLowException();
    }
    else{
        this->signGrade = signGrade;
        this->executeGrade = executeGrade;
    }
	std::cout << "Form default constructor called\n";
}
Form::~Form(){
	std::cout << "Form destructor called\n";
}

Form::Form(const  Form &a){
    this->name = a.getName();
    this->sign = a.getSign();
    this->signGrade = a.getSignGrade();
    this->executeGrade = a.getExecuteGrade();
	std::cout << "Form copy constructor called\n";
}

Form &Form::operator=(const  Form &a){
	this->name = a.getName();
    this->sign = a.getSign();
    this->signGrade = a.getSignGrade();
    this->executeGrade = a.getExecuteGrade();
    std::cout << "Form copy assignment operator called\n";
	return *this;
}

std::string	Form::getName() const{
	return this->name;
}

bool Form::getSign() const{
	return this->sign;
}

int Form::getSignGrade() const{
    return this->signGrade;
}
int Form::getExecuteGrade() const{
    return this->executeGrade;
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("\x1B[1;31mYou can't decrement grade \n\033[0m\n");
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("\x1B[1;32mYou can't increment grade\n\033[0m\n");
}

const char* Form::FormWasNotSignedException::what() const throw()
{
	return ("\x1B[1;33mForm wasnt signed\n\033[0m\n");
}


std::ostream & operator << ( std::ostream &o, Form const &a)
{
	o << "Form: " <<a.getName() << "\n Sign Status: " << a.getSign() << "\nSign Grade: " << a.getSignGrade() << "\nExecute Grade: "<< a.getExecuteGrade() << "\n";
	return (o);
}

void Form::beSigned(Bureaucrat &bur){
    if (bur.getGrade() > this->signGrade){
        throw Form::GradeTooLowException();
        return ;
    }
    else{
        this->sign = true;
        std::cout << "Form was signed\n";
    }
}
void Form::setName(std::string name){
    this->name = name;
}
