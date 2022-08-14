/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 22:09:48 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/12 22:09:48 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstring>
#include "Weapon.hpp"
#ifndef HUMANB_HPP
#define HUMANB_HPP
class HumanB{
    private:
         Weapon *type;
         std::string name;
    public:
        void attack();
        ~HumanB();
        HumanB(std::string name);
        void setWeapon(Weapon &weapon);
};
#endif