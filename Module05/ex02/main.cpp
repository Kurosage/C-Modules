/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 22:02:26 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/31 15:26:38 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
   Bureaucrat bur1("Lila",50);
   Bureaucrat bur2("Anya",150);
   PresidentialPardonForm ppf("PPF");
   RobotomyRequestForm rrf("CreateRobots");
   ShrubberyCreationForm scf("Tree");
   
   ppf.execute(bur1);
   // rrf.execute(bur2);
   // rrf.execute(bur1);
   // scf.execute(bur1);  

   // Bureaucrat bur3("Katya",4);
   // bur3.executeForm(scf);
   return 0;
}