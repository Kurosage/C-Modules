/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 22:09:42 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/12 22:09:43 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstring>
#include "Weapon.hpp"
#ifndef HUMANA_HPP
#define HUMANA_HPP
class HumanA{
    private:
         Weapon &type;
         std::string name;
    public:
        void attack();
        ~HumanA();
        HumanA(std::string name, Weapon &type);
};
#endif