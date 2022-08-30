/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 00:06:12 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/30 18:15:00 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"

class Form;
class PresidentialPardonForm : public Form
{
    private:
		std::string	target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
        ~PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm const &a);
		PresidentialPardonForm &operator = (PresidentialPardonForm const &a);
		std::string	getTarget( void ) const;
		void execute(Bureaucrat const & executor) const;
};

#endif