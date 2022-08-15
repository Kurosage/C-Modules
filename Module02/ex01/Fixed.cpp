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
Fixed::Fixed(const int int_t){
    std::cout << "Int constructor called\n";
    point = int_t << bits;
}
Fixed::Fixed(const float float_t){
    std::cout << "Float constructor called\n";
    point = roundf(float_t * (1 << bits));
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
     return (this->point);
}
void Fixed::setRawBits(int const raw){
    this->point = raw;
}

int Fixed::toInt(void) const {
    return getRawBits() >> bits;
}
float Fixed::toFloat(void) const{
    return (float)getRawBits() / (1 << bits);
}

std::ostream & operator << (std::ostream &os,Fixed const &a){
    return os << a.toFloat();
}