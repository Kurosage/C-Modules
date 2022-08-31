/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 19:09:23 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/30 16:37:17 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include <iostream>
#include <string>
#include "Form.hpp"
class Form;
class Bureaucrat{
    private:
        std::string name;
        int grade;
    public:
        Bureaucrat(std::string name, int grade);
        ~Bureaucrat();
        Bureaucrat(const  Bureaucrat &a);
        Bureaucrat &operator = (const Bureaucrat &a);
        std::string getName() const;
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();

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
        void signForm(Form &ref);
        void executeForm(Form const & form);
};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const  &a);
#endif