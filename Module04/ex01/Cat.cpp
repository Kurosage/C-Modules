/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 20:58:26 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/27 23:03:44 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    this->type = "Cat";
    this->brain = new Brain;
    std::cout << "Cat default constructor called\n";
}
Cat::~Cat(){
    std::cout << "Cat destructor called\n";
}
Cat::Cat(const  Cat &a){
    *this = a;
    std::cout << "Cat copy constructor called\n";
}
Cat &Cat::operator = (const Cat &a){
    this->type = a.type;
    this->brain = a.brain;
    std::cout << "Cat copy assignment operator called\n";
	return *this;
    
}
void Cat::makeSound() const{
    std::cout << "Cat sayng Meeeew\n";
}
std::string Cat::getType() const{
    return this->type;
}

Brain *Cat::getBrain() const{
    return this->brain;
}