/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 22:02:26 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/28 18:22:46 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
	Cat c;
	Dog d;
	Cat &c_lite = c;
	Cat c_deep(c_lite);

	std::cout << "\nStandart class\n";
	for (int i = 0; i < 10; i++){
		std::cout<< c.getType() <<"\n::::" << (c.getBrain()->getIdeas()[i])<<"\n";
	}
	std::cout << "\nLite copy\n";
	
	for (int i = 0; i < 10; i++){
		std::cout<< c_lite.getType() <<"\n::::" << (c_lite.getBrain()->getIdeas()[i])<<"\n";
	}
	std::cout << "\nDeep copy\n";
	for (int i = 0; i < 10; i++){
		std::cout<< c_deep.getType() <<"\n::::" << (c_deep.getBrain()->getIdeas()[i])<<"\n";
	}
	const Animal	*(animal_array[10]);
	for (int i = 0; i < 5; i++)
		animal_array[i] = new Cat();
	for (int i = 5; i < 10; i++)
		animal_array[i] = new Dog();
	for (int i = 0; i < 10; i++)
		delete animal_array[i];

   return 0;
}