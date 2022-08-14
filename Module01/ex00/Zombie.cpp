/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 22:03:01 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/12 22:03:02 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
Zombie::~Zombie(){
    std::cout<< "Zombie " << name << " died\n";
}

Zombie::Zombie(std::string newname){
            name = newname;
}
void Zombie::announce(void){
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}


