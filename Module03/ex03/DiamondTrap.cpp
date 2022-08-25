/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 17:39:51 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/25 18:53:46 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_trap"){
    this->_name= name;
    this->dmg = FragTrap::dmg;
    this->hit_p = FragTrap::hit_p;
    this->energy_p = ScavTrap::energy_p;
    std::cout << "DiamondTrap Default Constructor called\n";
}
DiamondTrap::DiamondTrap(): ClapTrap("def_clap_trap"){
    this->_name= "def";
    this->dmg = FragTrap::dmg;
    this->hit_p = FragTrap::hit_p;
    this->energy_p = ScavTrap::energy_p;
    std::cout << "DiamondTrap Default Constructor called\n";
}
DiamondTrap::~DiamondTrap(){
    std::cout << "DiamondTrap destructor called\n";
}
DiamondTrap::DiamondTrap(const  DiamondTrap &a): ClapTrap(a), ScavTrap(a), FragTrap(a){
    *this = a;
    std::cout << "DiamondTrap Copy Constructor called\n";
}
DiamondTrap &DiamondTrap::operator = (const DiamondTrap &a){
    this->name = a.name + "_clap_trap";
    this->dmg = a.dmg;
    this->hit_p = a.hit_p;
    this->energy_p = a.energy_p;
    std::cout << "DiamondTrap copy assignment operator called\n";
	return *this;
}
void DiamondTrap::attack(const std::string& target){
        if (this->energy_p > 0 && this->hit_p > 0){
        this->energy_p--;
        std::cout << "DiamondTrap \x1B[1;31m" <<this->name <<" \033[0mattacks \x1B[1;36m" << target << "\033[0m" <<
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
void DiamondTrap::whoAmI(){
    std::cout << "DiamondTrap named as " << this->_name <<"::ClapTrap named as " << ClapTrap::name << ".\n";
}