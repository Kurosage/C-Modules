/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 16:58:42 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/25 18:41:32 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H
#include <iostream>
#include <string>
#include "ClapTrap.hpp"
class FragTrap: virtual public ClapTrap{
    public:
        FragTrap();
        FragTrap(std::string name);
        virtual ~FragTrap();
        FragTrap(const  FragTrap &a);
        FragTrap &operator = (const FragTrap &a);

        void highFivesGuys(void);
        void attack(const std::string& target);
};
#endif