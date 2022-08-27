/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 20:58:29 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/27 22:30:32 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H
#include <iostream>
#include <string>
#include "Animal.hpp"
class Dog: public Animal{
    private:
        std::string type;
    public:
        Dog();
        ~Dog();
        Dog(const  Dog &a);
        Dog &operator = (const Dog &a);
        std::string getType() const;
        void makeSound() const;
};
#endif