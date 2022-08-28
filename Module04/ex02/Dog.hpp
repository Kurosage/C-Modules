/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 20:58:29 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/28 19:00:27 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H
#include <iostream>
#include <string>
#include "AAnimal.hpp"
#include "Brain.hpp"
class Dog: public AAnimal{
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