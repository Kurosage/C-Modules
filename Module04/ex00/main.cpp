/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 22:02:26 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/27 22:36:32 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
   const Animal* meta = new Animal();
   const Animal* j = new Dog();
   const Animal* i = new Cat();
   std::cout << j->getType() << " " << std::endl;
   std::cout << i->getType() << " " << std::endl;
   i->makeSound(); 
   j->makeSound();
   meta->makeSound();

   const WrongAnimal* wrongan = new WrongAnimal();
   const WrongAnimal* wrongcat = new WrongCat();
   std::cout << wrongcat->getType() << " " << std::endl;
   wrongcat->makeSound();
   wrongan->makeSound();
   return 0;
}