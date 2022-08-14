/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 22:06:35 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/12 22:06:37 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
    int i = 0;
    Zombie *horde = new Zombie[N];
    if (horde == NULL){
        std::cout << "Memory not allocated\n";
        return (NULL);
    }

    while ( i < N){
        horde[i].setName(name + " " + std::to_string(i));
        i++;
    }
    return horde;
}