/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 22:09:56 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/12 22:09:57 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
Weapon::~Weapon(){};
Weapon::Weapon(std::string type){
    this->type=type;
};

void Weapon::setType(std::string type){
    this->type = type;
}

std::string Weapon::getType(){
    return this->type;
}
