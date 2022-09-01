/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 22:02:26 by rmaren            #+#    #+#             */
/*   Updated: 2022/09/01 16:17:08 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
int main()
{

    Bureaucrat bur1("Lila",3);
    Bureaucrat bur2("Anya",150);
	Bureaucrat bur3("Dina", 20);
	PresidentialPardonForm prf("1");
	RobotomyRequestForm rrf("2");
	ShrubberyCreationForm scf("3");

	bur1.executeForm(prf);
	bur2.executeForm(prf);
	bur2.executeForm(rrf);
	bur3.executeForm(scf);

	prf.execute(bur1);

}