/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 00:04:51 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/30 18:40:50 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"

class Form;

class ShrubberyCreationForm : public Form
{	
    private:
		std::string	target;
	public:
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm const &a);
		ShrubberyCreationForm &operator = (ShrubberyCreationForm const &a);
		std::string	getTarget( void ) const;
		void execute(Bureaucrat const & executor) const;
};

#endif