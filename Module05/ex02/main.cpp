/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 22:02:26 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/30 00:02:23 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
int main()
{
   Bureaucrat bur1("Lila",50);
   Bureaucrat bur2("Anya",150);
   Form for1("doc1", 100,100);
   Form for2("doc1", 100,100);
   std::cout << bur1 << "_____";
   std::cout << for1 << "\n+--------------+\n";
   try
	{   
		for1.beSigned(bur1);
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what();
	}
	
    std::cout << "+--------------+\n";
    std::cout << bur1 << "_______";
    std::cout << for1 << "\n+--------------+\n";
	std::cout << bur2 << "______";
    std::cout << for2 << "\n+--------------+\n";

	try
	{
		bur2.signForm(for2);
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what();
	}
	std::cout << bur2 << "_____";
   	std::cout << for2 << "\n";	
   
   return 0;
}