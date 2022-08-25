/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 21:26:32 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/25 18:40:35 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H
#include <iostream>
#include <string>
class ClapTrap{
    protected:
        std::string name;
        unsigned int hit_p;
        unsigned int energy_p;
        unsigned int dmg;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        virtual ~ClapTrap();
        ClapTrap(const  ClapTrap &a);
        ClapTrap &operator = (const ClapTrap &a);

        int getHit_p(){
            return this->hit_p;
        }
        int getEnergy_p(){
            return this->energy_p;
        }
        int getDmg(){
            return this->dmg;
        }
        std::string getName(){
            return this->name;
        }
        void setHit_p(int hit_p){
            this->hit_p = hit_p;
        }
        void setEnergy_p(int energy_p){
            this->energy_p = energy_p;
        }
        void setDmg(int dmg){
            this->dmg= dmg;
        }
        void setName(std::string name){
            this->name = name;
        }
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

};
#endif