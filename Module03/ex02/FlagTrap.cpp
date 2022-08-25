/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 16:58:47 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/25 17:55:14 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FlagTrap.hpp"
FlagTrap::FlagTrap(std::string name): ClapTrap(name){
    this->dmg = 30;
    this->hit_p = 100;
    this->energy_p = 100;
    std::cout << "FlagTrap Default Constructor called\n";
}
FlagTrap::FlagTrap(const FlagTrap &a): ClapTrap(a){
    std::cout << "FlagTrap Copy Constructor called\n";
}

FlagTrap::~FlagTrap(){
    std::cout << "FlagTrap destructor called\n";
}

FlagTrap &FlagTrap::operator=(const FlagTrap &a)
{
	
	this->name = a.name;
    this->dmg = a.dmg;
    this->hit_p = a.hit_p;
    this->energy_p = a.energy_p;
    std::cout << "FlagTrap copy assignment operator called\n";
	return *this;
}

void FlagTrap::attack(const std::string& target){
    if (this->energy_p > 0 && this->hit_p > 0){
        this->energy_p--;
        std::cout << "ScavTrap \x1B[1;31m" <<this->name <<" \033[0mattacks \x1B[1;36m" << target << "\033[0m" <<
        ", causing \033[1;31;21m" << this->dmg << "\033[0m points of damage!\n";
    }
    else {
        if (this->energy_p <= 0)
            std::cout << "\x1B[35mNo energy\033[0m\n";
        else if (this->hit_p <= 0){
            std::cout << "\x1B[41mYour hero is dead\033[0m\n";
        }
    }
}

void FlagTrap::highFivesGuys(void){
    std::cout << "Do you want give high  five?\n";
}