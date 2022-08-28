/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 20:53:56 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/28 17:20:47 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
    this->type = "Animal";
    std::cout << "Animal default constructor called\n";
}
Animal::~Animal(){
        std::cout << "Animal destructor called\n";
}
Animal::Animal(const  Animal &a){
    *this = a;
    std::cout << "Animal copy constructor called\n";
}
Animal &Animal::operator = (const Animal &a){
    this->type = a.type;
    std::cout << "Animal copy assignment operator called\n";
	return *this; 
}

std::string Animal::getType() const{
            return this->type;
}
void Animal::makeSound() const{
    std::cout << "What kind of animal says something\n";
}