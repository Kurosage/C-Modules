/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 20:58:29 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/28 17:18:58 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H
#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"
class Dog: public Animal{
    private:
        std::string type;
        Brain   *brain;
    public:
        Dog();
        ~Dog();
        Dog(Dog &a);
        Dog &operator = (const Dog &a);
        std::string getType() const;
        void makeSound() const;
        Brain *getBrain() const;
};
#endif