/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 22:02:26 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/25 17:32:23 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FlagTrap.hpp"
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

   ScavTrap svar1 = ScavTrap("Kitty");
   std::cout << svar1.getName() << " :: " << svar1.getHit_p() << " :: " << svar1.getEnergy_p() << " :: " << svar1.getDmg() << " :: " << svar1.getGuardstatus()<<"\n" ;
   ScavTrap svar2 = ScavTrap("Doggy");
   std::cout << svar2.getName() << " :: " << svar2.getHit_p() << " :: " << svar2.getEnergy_p() << " :: " << svar2.getDmg() << " :: " << svar2.getGuardstatus()<<"\n";

   svar2.attack("Kitty");
   std::cout << svar2.getName() << " :: " << svar2.getHit_p() << " :: " << svar2.getEnergy_p() << " :: " << svar2.getDmg() << " :: " << svar2.getGuardstatus()<<"\n";
   svar1.takeDamage(svar2.getDmg());
   std::cout << svar1.getName() << " :: " << svar1.getHit_p() << " :: " << svar1.getEnergy_p() << " :: " << svar1.getDmg() << " :: " << svar1.getGuardstatus()<<"\n" ;

   svar1.guardGate();
   std::cout << svar1.getName() << " :: " << svar1.getHit_p() << " :: " << svar1.getEnergy_p() << " :: " << svar1.getDmg() << " :: " << svar1.getGuardstatus()<<"\n" ;

   svar1.guardGate();
   std::cout << svar1.getName() << " :: " << svar1.getHit_p() << " :: " << svar1.getEnergy_p() << " :: " << svar1.getDmg() << " :: " << svar1.getGuardstatus()<<"\n" ;
   
   FlagTrap svar11 = FlagTrap("Andy");
   std::cout << svar11.getName() << " :: " << svar11.getHit_p() << " :: " << svar11.getEnergy_p() << " :: " << svar11.getDmg() << " :: " << "\n" ;
   FlagTrap svar22 = FlagTrap("Tom");
   std::cout << svar22.getName() << " :: " << svar22.getHit_p() << " :: " << svar22.getEnergy_p() << " :: " << svar22.getDmg() << " :: " << "\n";
   svar22.attack("Andy");
   std::cout << svar22.getName() << " :: " << svar22.getHit_p() << " :: " << svar22.getEnergy_p() << " :: " << svar22.getDmg() << " :: " << "\n";
   svar11.highFivesGuys();
   return 0;
}