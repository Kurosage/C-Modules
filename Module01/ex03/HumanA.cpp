/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 22:09:40 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/12 22:09:40 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
HumanA::~HumanA(){};
HumanA::HumanA(std::string name,Weapon &type):type(type){
    this->name = name;
}

void HumanA::attack(){
    std::cout << this->name << " attacks with their " <<  this->type.getType() << "\n";
}

