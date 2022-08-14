/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 22:09:53 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/12 22:09:54 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstring>
#ifndef WEAPON_HPP
#define WEAPON_HPP
class Weapon{
    private:
         std::string type;
    public:
        std::string getType();
        void setType(std::string type);
        ~Weapon();
        Weapon(std::string type);
        
        
        
};
#endif