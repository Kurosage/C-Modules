/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 00:04:58 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/31 14:56:08 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iomanip>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery Creation Form", 145, 137){
	this->target = target;
	std::cout << "ShrubberyCreationForm default constructor called\n";
}


ShrubberyCreationForm::~ShrubberyCreationForm(){
	std::cout << "ShrubberyCreationForm destructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &a) : Form(a.getName(), a.getSignGrade(), a.getExecuteGrade()){
	this->target = a.getTarget();
	std::cout << "ShrubberyCreationForm copy constructor called\n";
}

ShrubberyCreationForm & ShrubberyCreationForm::operator = (ShrubberyCreationForm const &a){
	this->target = a.getTarget();
    std::cout << "ShrubberyCreationForm copy assignment operator called\n";
	return (*this);
}

std::string	ShrubberyCreationForm::getTarget( void ) const{

	return (this->target);
}
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::string	tree = "___________eeeeEE_eeeeEErr\n"
"__________T_____rr________T"
"________rrT_______________ eeeeEET\n"
"________T_______________________rrT\n"
"_______ rr____T__________________ T\n"
"______rrT____eeeeEErrT____________rrT\n"
"______rr______EEErT_______ rr_______rr_rr\n"
"_____eeeeEE_______________rr__T_rr___eeeeEE\n"
"___rrT__EEEr__rrT_________eeeeEET____rr___rrT\n"
"___T______rrT_T_T__T__T_rrT________________rrT\n"
"__ T________T_T_eeeeeeeeEr_rr________________rr\n"
"___rr____EEEr_T_rrT_EEEr_T_eeeeeeeeEr________rr\n"
"__EEEr___eeeeEErr___rrT_T__rrT____EEEr______rrT\n"
"_rrT_EEErT_eeeeEE_rr_rrT____eeeeEErr________rrT\n"
"rr_____rrT__rr_EEErT__rr___eeeeEE_T_____rrT___rr\n"
"T_____rrT___T_T_rrT___rr_rr__T__EEErT__rrT_____rr\n"
"rr___eeeeEE_rrT___T____rrT__eeeeeeeeeeeeEEEr____T\n"
"_rr__eeeeeeeeeeee_rrT__rr__eeeeEET__EEEr__T____rrT\n"
"__ EEEr_____T_rrT______rr___rr_____rrT_________T\n"
"____________rrT__rr_____T___rrT_eeeeeeeeErT___rr\n"
"T__TeeeeeeeeeeeEEErT_rr_rr_eeeeeeeeeeeeeeeeEErrT\n"
"T_ T_____EEErT___rrT_rr__EEEr___rrT________rrT\n"
"T_ rr____rr_______rr_rr___EEEr_EEErT_____rrT\n"
"TTT_____T___T_rrT_T_rr___rr_rrT__rrT____rr\n"
"TT rr_______EEEr__rr______ T________eeeeEE\n"
"__TT__eeeeEET_____T___rrT__T__________rrT\n"
"___TeeeEErrT_____rr__EEErT_rr\n"
"________________rr___EEEr___rr\n"
"_______________rr____EEEr___rr\n"
"____________EEEr_____rr_____rr\n"
"___________ rr_______rr_____rr\n"
"__________rrT___rr___rr_____rr\n"
"________EEEr____rr___T______rr\n"
"______ EEErT____T______rr____rr\n"
"_____eeeeEErr_rrT_T____rr_T___rr\n"
"___eeeeeeeeErTKeeeeeeeeeeeeeeeeEET\n"
"__ eeeeeeeeeeeerr_eeeeEE____EEErT_rrT\n";


	if (this->getSign() == false)
		throw (Form::FormWasNotSignedException());
	else if (executor.getGrade() > this->getExecuteGrade())
		throw (Form::GradeTooLowException());
	else
	{
		std::ofstream	fout(this->target);
		if (!fout.is_open())
		{
			std::cout << "Cant open file\n";
			return ;
		}
		fout << tree;
	}
}