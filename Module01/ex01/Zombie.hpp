/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 22:06:41 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/12 22:06:42 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstring>
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
class Zombie{
    private:
         std::string name;
    public:
        ~Zombie();
        Zombie();
        Zombie(std::string newname);
        void announce(void);
        void setName(std::string newname);
        
        
};
Zombie* zombieHorde(int N, std::string name);
#endif