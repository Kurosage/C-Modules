/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:03:35 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/25 18:44:43 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap(){
    this->name="STD";
    this->dmg = 20;
    this->hit_p = 100;
    this->energy_p = 50;
    this->guardStatus = false;
    std::cout << "ScavTrap Default Constructor called\n";
}
ScavTrap::ScavTrap(std::string name): ClapTrap(name){
    this->dmg = 20;
    this->hit_p = 100;
    this->energy_p = 50;
    this->guardStatus = false;
    std::cout << "ScavTrap Default Constructor called\n";
}
ScavTrap::ScavTrap(const ScavTrap &a): ClapTrap(a){
    this->guardStatus = a.guardStatus;
    std::cout << "ScavTrap Copy Constructor called\n";
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap destructor called\n";
}

ScavTrap &ScavTrap::operator=(const ScavTrap &a)
{
	
	this->name = a.name;
    this->dmg = a.dmg;
    this->hit_p = a.hit_p;
    this->energy_p = a.energy_p;
    this->guardStatus = false;
    std::cout << "ScavTrap copy assignment operator called\n";
	return *this;
}
void ScavTrap::attack(const std::string& target){
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

void ScavTrap::guardGate(){
    if (this->guardStatus == false){
        this->guardStatus = true;
        std::cout << "\x1B[35mGate keeper mode enabled\033[0m\n";
    }
    else{
        this->guardStatus = false;
        std::cout << "\x1B[35mGate keeper mode disabled\033[0m\n";
    }  
}

void ScavTrap::setGuardstatus(bool gstatus){
            this->guardStatus = gstatus;
        }
bool ScavTrap::getGuardstatus(){
            return this->guardStatus;
        }