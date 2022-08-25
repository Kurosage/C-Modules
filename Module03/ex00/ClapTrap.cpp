/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 21:26:26 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/25 14:21:46 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name){
    this->name = name;
    this->dmg = 0;
    this->hit_p = 10;
    this->energy_p = 10;
    std::cout << "Default constructor called\n";
}
ClapTrap::~ClapTrap(){
    std::cout << "Destructor called\n";
}
ClapTrap::ClapTrap(const  ClapTrap &a){
    *this = a;
    std::cout << "Copy constructor called\n";
}
ClapTrap &ClapTrap::operator = (const ClapTrap &a){
    this->name = a.name;
	this->hit_p= a.hit_p;
	this->energy_p= a.energy_p;
	this->dmg = a.dmg;
    std::cout << "Copy assignment operator called\n";
	return *this;
    
}
void ClapTrap::attack(const std::string& target){
    if (this->energy_p > 0 && this->hit_p > 0){
        this->energy_p--;
        std::cout << "ClapTrap \x1B[1;31m" <<this->name <<" \033[0mattacks \x1B[1;36m" << target << "\033[0m" <<
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

void ClapTrap::takeDamage(unsigned int amount){
    if (this->hit_p > 0){
        this->hit_p -= amount;
        if (this->hit_p <= 0)
            std::cout << "\x1B[41mClapTrap " << this->name <<" is dead!\033[0m\n";
        else
            std::cout << "ClapTrap " << this->name <<" recieve damage \033[1;31;21m"<< amount<< "\033[0m and has \x1B[21;32m"<< this->hit_p<<"\033[0m points now\n";
    }
    else {
            std::cout << "\x1B[41mYour hero is dead\033[0m\n";
    }
}

void ClapTrap::beRepaired(unsigned int amount){
    if (this->energy_p > 0 && this->hit_p > 0){
        this->energy_p--;
        this->hit_p += amount;
        std::cout << "\x1B[32mClapTrap " << this->name <<" repaired!\033[0m\n";
    }
    else {
        if (this->energy_p <= 0)
            std::cout << "\x1B[35mNo energy\033[0m\n";
        else if (this->hit_p <= 0){
            std::cout << "\x1B[41mYour hero is dead\033[0m\n";
        }
    }
}