/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 21:04:55 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/27 22:32:53 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H
#include <iostream>
#include <string>
class WrongAnimal{
    protected:
        std::string type;
    public:
        WrongAnimal();
        virtual ~WrongAnimal();
        WrongAnimal(const  WrongAnimal &a);
        WrongAnimal &operator = (const WrongAnimal &a);
        std::string getType() const;
        void makeSound() const;

};
#endif