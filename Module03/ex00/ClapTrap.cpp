/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 21:26:26 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/15 22:25:39 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name){
    this->name = name;
    std::cout << "Default constructor called\n";
}
ClapTrap::~ClapTrap(){
    std::cout << "Destructor called\n";
}

void ClapTrap::attack(const std::string& target){

}

void ClapTrap::takeDamage(unsigned int amount){
    
}

void ClapTrap::beRepaired(unsigned int amount){
    
}