/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 20:58:28 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/28 19:00:25 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H
#include <iostream>
#include <string>
#include "AAnimal.hpp"
#include "Brain.hpp"
class Cat: public AAnimal{
    private:
        std::string type;
        Brain   *brain;
    public:
        Cat();
        ~Cat();
        Cat(Cat &a);
        Cat &operator = (const Cat &a);
        std::string getType() const;
        void makeSound() const;
        Brain *getBrain() const;
};
#endif