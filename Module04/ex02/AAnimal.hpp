/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 20:53:59 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/29 21:38:50 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_H
#define AANIMAL_H
#include <iostream>
#include <string>
class AAnimal{
    protected:
        std::string type;
    public:
        AAnimal();
        virtual ~AAnimal();
        AAnimal(const  AAnimal &a);
        AAnimal &operator = (const AAnimal &a);
        virtual std::string getType() const;
        virtual void makeSound() const = 0;

};
#endif