/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 21:04:57 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/27 22:32:59 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    this->type = "WrongAnimal";
    std::cout << "WrongAnimal default constructor called\n";
}
WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal destructor called\n";
}
WrongAnimal::WrongAnimal(const  WrongAnimal &a){
    *this = a;
    std::cout << "WrongAnimal copy constructor called\n";
}
WrongAnimal &WrongAnimal::operator = (const WrongAnimal &a){
    this->type = a.type;
    std::cout << "WrongAnimal copy assignment operator called\n";
	return *this; 
}

std::string WrongAnimal::getType() const{
            return this->type;
}
void WrongAnimal::makeSound() const{
    std::cout << "What kind of Wronganimal says something\n";
}