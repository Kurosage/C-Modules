/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 22:06:28 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/12 22:06:38 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
Zombie::~Zombie(){
    std::cout<< "Zombie " << name << " died\n";
}
Zombie::Zombie(){};
Zombie::Zombie(std::string newname){
            name = newname;
}
void Zombie::announce(void){
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::setName(std::string newname){
    this->name = newname;
}

