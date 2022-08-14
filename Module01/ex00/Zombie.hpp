/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 22:03:04 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/12 22:03:04 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
class Zombie{
    private:
         std::string name;
    public:
        ~Zombie();
        Zombie(std::string newname);
        void announce(void);
        
        
};
void randomChump(std::string name);
Zombie* newZombie(std::string name);
#endif