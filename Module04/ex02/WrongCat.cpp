/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 21:04:52 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/27 22:33:08 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
    this->type = "WrongCat";
    std::cout << "WrongCat default constructor called\n";
}
WrongCat::~WrongCat(){
    std::cout << "WrongCat destructor called\n";
}
WrongCat::WrongCat(const  WrongCat &a){
    *this = a;
    std::cout << "WrongCat copy constructor called\n";
}
WrongCat &WrongCat::operator = (const WrongCat &a){
    this->type = a.type;
    std::cout << "WrongCat copy assignment operator called\n";
	return *this;
    
}
void WrongCat::makeSound() const{
    std::cout << "WrongCat sayng Meeeew\n";
}
std::string WrongCat::getType() const{
    return this->type;
}