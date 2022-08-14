/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 22:06:33 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/12 22:07:58 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
    Zombie* hord = zombieHorde(10,"ZomBill");

    int i = 0;

    while (i < 10){
        hord[i].announce();
        i++;
    }
    delete[] hord;
    return 0;
}