/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 17:39:50 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/25 18:53:04 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H
#include <iostream>
#include <string>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
class DiamondTrap: public ScavTrap, public FragTrap{
    private:
       std::string _name;
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        virtual ~DiamondTrap();
        DiamondTrap(const  DiamondTrap &a);
        DiamondTrap &operator = (const DiamondTrap &a);
        void attack(const std::string& target);
        void whoAmI();
};
#endif