/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 20:53:56 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/29 21:41:25 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(){
    this->type = "Animal";
    std::cout << "Animal default constructor called\n";
}
AAnimal::~AAnimal(){
        std::cout << "Animal destructor called\n";
}
AAnimal::AAnimal(const  AAnimal &a){
    *this = a;
    std::cout << "Animal copy constructor called\n";
}
AAnimal &AAnimal::operator = (const AAnimal &a){
    this->type = a.type;
    std::cout << "Animal copy assignment operator called\n";
	return *this; 
}

std::string AAnimal::getType() const{
            return this->type;
}
