/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 22:09:45 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/12 22:09:45 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"
HumanB::~HumanB(){};
HumanB::HumanB(std::string name){
    this->name = name;
};

void HumanB::attack(){
    std::cout << this->name << " attacks with their " <<  this->type->getType() << "\n";
}

void HumanB::setWeapon(Weapon &weapon){
    this->type = &weapon;
}