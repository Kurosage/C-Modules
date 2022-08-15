/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 21:26:26 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/15 22:25:39 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
    std::cout << "Default constructor called\n";
    point = 0;
}
Fixed::~Fixed(){
    std::cout << "Destructor called\n";
}
Fixed::Fixed (const Fixed &a){
    std::cout << "Copy constructor called\n";
    point = a.getRawBits();
}
Fixed & Fixed::operator = (const Fixed &a){
    std::cout << "Copy assignment operator called\n";
    if (this != &a){
        point = a.getRawBits();
    }
    return(*this);
    
}
int Fixed::getRawBits(void) const{
     std::cout << "getRawBits member function called\n";
     return (point);
}
void Fixed::setRawBits(int const raw){
    point = raw;
}