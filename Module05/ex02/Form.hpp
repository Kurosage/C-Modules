/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 22:12:50 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/29 23:59:33 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
    private:
        std::string name;
        bool sign;
        int signGrade;
        int executeGrade;
    public:
        Form(std::string name, int signGrade, int executeGrade);
        ~Form();
        Form(const  Form &a);
        Form &operator = (const Form &a);
        void beSigned(Bureaucrat &bur);

        bool getSign() const;
        std::string getName() const;
        int getSignGrade() const;
        int getExecuteGrade() const;

        void setName(std::string name);
        class GradeTooLowException : public std::exception
        {
        public:
            virtual const char *what() const throw();
        };

        class GradeTooHighException : public std::exception
        {
        public:
            virtual const char *what() const throw();
        };
};

std::ostream	&operator << (std::ostream &o, Form const  &a);
#endif