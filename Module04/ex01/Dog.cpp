/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 20:58:30 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/27 22:30:36 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    this->type = "Dog";
    std::cout << "Dog default constructor called\n";
}
Dog::~Dog(){
    std::cout << "Dog destructor called\n";
}
Dog::Dog(const  Dog &a){
    *this = a;
    std::cout << "Dog copy constructor called\n";
}
Dog &Dog::operator = (const Dog &a){
    this->type = a.type;
    std::cout << "Dog copy assignment operator called\n";
	return *this;
    
}
void Dog::makeSound() const{
    std::cout << "Dog sayng Gaaaw\n";
}
std::string Dog::getType() const{
    return this->type;
}