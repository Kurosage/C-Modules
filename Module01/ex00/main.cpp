/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 22:02:26 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/12 22:06:00 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
    Zombie newzom =Zombie("Foodsws");
    Zombie* neww = newZombie("FFF");
    
    newzom.announce();
    neww->announce();
    delete neww;
    randomChump("Lila");
    return 0;
}