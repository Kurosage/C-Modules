/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 22:02:26 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/25 14:27:24 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void ) {
   
   ClapTrap var1 = ClapTrap("Lili");
   std::cout << var1.getName() << " :: " << var1.getHit_p() << " :: " << var1.getEnergy_p() << " :: " << var1.getDmg() << "\n";
   ClapTrap var2 = ClapTrap("Anya");
   std::cout <<  var2.getName() << " :: " << var2.getHit_p() << " :: " << var2.getEnergy_p() << " :: " << var2.getDmg() << "\n";
   var1.setDmg(5);
   std::cout <<  var1.getName() << " :: " << var1.getHit_p() << " :: " << var1.getEnergy_p() << " :: " << var1.getDmg() << "\n";
   var2.setDmg(3);
   std::cout <<  var2.getName() << " :: " << var2.getHit_p() << " :: " << var2.getEnergy_p() << " :: " << var2.getDmg() << "\n";

   var2.attack("Lili");
   std::cout <<  var2.getName() << " :: " << var2.getHit_p() << " :: " << var2.getEnergy_p() << " :: " << var2.getDmg() << "\n";
   var1.takeDamage(var2.getDmg());
   std::cout << var1.getName() << " :: " << var1.getHit_p() << " :: " << var1.getEnergy_p() << " :: " << var1.getDmg() << "\n";
   
   
   var1.attack("Anya");
   std::cout << var1.getName() << " :: " << var1.getHit_p() << " :: " << var1.getEnergy_p() << " :: " << var1.getDmg() << "\n";
   var2.takeDamage(var1.getDmg());
   std::cout <<  var2.getName() << " :: " << var2.getHit_p() << " :: " << var2.getEnergy_p() << " :: " << var2.getDmg() << "\n";
   var2.beRepaired(5);
   std::cout <<  var2.getName() << " :: " << var2.getHit_p() << " :: " << var2.getEnergy_p() << " :: " << var2.getDmg() << "\n";
   var1.attack("Anya");
   std::cout << var1.getName() << " :: " << var1.getHit_p() << " :: " << var1.getEnergy_p() << " :: " << var1.getDmg() << "\n";
   var2.takeDamage(var1.getDmg());
   std::cout <<  var2.getName() << " :: " << var2.getHit_p() << " :: " << var2.getEnergy_p() << " :: " << var2.getDmg() << "\n";
   var1.attack("Anya");
   std::cout << var1.getName() << " :: " << var1.getHit_p() << " :: " << var1.getEnergy_p() << " :: " << var1.getDmg() << "\n";
   var2.takeDamage(var1.getDmg());
   std::cout <<  var2.getName() << " :: " << var2.getHit_p() << " :: " << var2.getEnergy_p() << " :: " << var2.getDmg() << "\n";
   
   var1.setEnergy_p(1);
   var1.beRepaired(2);
   var1.beRepaired(2);
   return 0;
}