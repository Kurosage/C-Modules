/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:03:31 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/25 18:44:20 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H
#include <iostream>
#include <string>
#include "ClapTrap.hpp"
class ScavTrap: virtual public ClapTrap{
    private:
        bool guardStatus;
    public:
        ScavTrap();
        ScavTrap(std::string name);
        virtual ~ScavTrap();
        ScavTrap(const  ScavTrap &a);
        ScavTrap &operator = (const ScavTrap &a);

        void guardGate();
        void attack(const std::string &target);
        void setGuardstatus(bool gstatus);
        bool getGuardstatus();
};
#endif