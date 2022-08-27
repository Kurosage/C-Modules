/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 21:04:50 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/27 22:33:19 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
#define WRONGCAT_H
#include <iostream>
#include <string>
#include "WrongAnimal.hpp"
class WrongCat: public WrongAnimal{
    private:
        std::string type;
    public:
        WrongCat();
        ~WrongCat();
        WrongCat(const  WrongCat &a);
        WrongCat &operator = (const WrongCat &a);
        std::string getType() const;
        void makeSound() const;
};
#endif