/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 20:58:26 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/28 17:46:33 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(){
    this->type = "Cat";
    this->brain = new Brain;
    std::cout << "Cat default constructor called\n";
}
Cat::~Cat(){
   delete this->brain;
    std::cout << "Cat destructor called\n";
}
Cat::Cat(Cat &a){
    this->type = a.getType();
    this->brain = new Brain(*(a.getBrain()));
    
    std::cout << "Cat copy constructor called\n";
}
Cat &Cat::operator = (const Cat &a){
    // if (this->brain)
	// 	delete (this->brain);
	this->brain = new Brain;
	this->type = a.type;
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