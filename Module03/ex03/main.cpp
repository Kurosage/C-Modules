/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 22:02:26 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/25 18:58:33 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
int main( void ) {
   
   DiamondTrap var1;
   std::cout << var1.getName() << " :: " << var1.getHit_p() << " :: " << var1.getEnergy_p() << " :: " << var1.getDmg() << "\n";
   DiamondTrap var2 = DiamondTrap("Anya");
   std::cout <<  var2.getName() << " :: " << var2.getHit_p() << " :: " << var2.getEnergy_p() << " :: " << var2.getDmg() << "\n";
   var1.attack("Anya");
   std::cout << var1.getName() << " :: " << var1.getHit_p() << " :: " << var1.getEnergy_p() << " :: " << var1.getDmg() << "\n";
   var2.takeDamage(var1.getDmg());
   std::cout <<  var2.getName() << " :: " << var2.getHit_p() << " :: " << var2.getEnergy_p() << " :: " << var2.getDmg() << "\n";
   var1.beRepaired(2);
   std::cout << var1.getName() << " :: " << var1.getHit_p() << " :: " << var1.getEnergy_p() << " :: " << var1.getDmg() << "\n";
   var2.whoAmI();
   var1.whoAmI();



   return 0;
}