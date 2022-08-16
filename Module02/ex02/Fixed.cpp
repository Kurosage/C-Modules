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
    point = 0;
}
Fixed::Fixed(const int int_t){
    point = int_t << bits;
}
Fixed::Fixed(const float float_t){
    point = roundf(float_t * (1 << bits));
}
Fixed::~Fixed(){}
Fixed::Fixed (const Fixed &a){
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

int Fixed::operator > (const Fixed &a)const{
    return (point > a.point);
}
int Fixed::operator < (const Fixed &a)const{
    return (point < a.point);
}
int Fixed::operator >= (const Fixed &a)const{
    return (point >= a.point);
}
int Fixed::operator <= (const Fixed &a)const{
    return (point <= a.point);
}
int Fixed::operator == (const Fixed &a)const{
    return (point == a.point);
}
int Fixed::operator != (const Fixed &a)const{
    return (point != a.point);
}

Fixed Fixed::operator + (const Fixed &a)const{
    return (toFloat() + a.toFloat());
}
Fixed Fixed::operator - (const Fixed &a)const{
    return (toFloat() - a.toFloat());
}
Fixed Fixed::operator * (const Fixed &a)const{
    return (toFloat() * a.toFloat());
}
Fixed Fixed::operator / (const Fixed &a)const{
    return (toFloat() / a.toFloat());
}

Fixed & Fixed::operator ++ (void){
    this->point +=1;
    return (*this);
}
Fixed & Fixed::operator -- (void){
    this->point -=1;
    return (*this);
}
Fixed Fixed::operator ++ (int n){
    Fixed fix = *this;
    (this->point) += 1;
    return (fix);
}
Fixed Fixed::operator -- (int n){
    Fixed fix = *this;
    (this->point) -= 1;
    return (fix);
}

const Fixed & Fixed::min(const Fixed &a,const Fixed &b){
    if (a < b)
        return a;
    else
        return b;
}
const Fixed & Fixed::max(const Fixed &a,const Fixed &b){
    if (a > b)
        return a;
    else
        return b;
}
Fixed & Fixed::min(Fixed &a,Fixed &b){
    if (a < b)
        return a;
    else
        return b;
}
Fixed & Fixed::max(Fixed &a,Fixed &b){
    if (a > b)
        return a;
    else
        return b;
}