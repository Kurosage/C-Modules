/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 20:58:30 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/28 17:47:25 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"
Dog::Dog(){
    this->type = "Dog";
    this->brain = new Brain;
    std::cout << "Dog default constructor called\n";
}
Dog::~Dog(){
    delete this->brain;
    std::cout << "Dog destructor called\n";
}
Dog::Dog(Dog &a){
    this->type = a.getType();
    this->brain = new Brain(*(a.getBrain()));
    std::cout << "Dog copy constructor called\n";
}
Dog &Dog::operator = (const Dog &a){
    if (this->brain)
		delete (this->brain);
	this->brain = new Brain;
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
Brain *Dog::getBrain() const{
    return this->brain;
}