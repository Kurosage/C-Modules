/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 20:58:28 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/27 22:30:40 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H
#include <iostream>
#include <string>
#include "Animal.hpp"
class Cat: public Animal{
    private:
        std::string type;
    public:
        Cat();
        ~Cat();
        Cat(const  Cat &a);
        Cat &operator = (const Cat &a);
        std::string getType() const;
        void makeSound() const;
};
#endif