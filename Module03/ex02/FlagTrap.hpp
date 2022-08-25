/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 16:58:42 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/25 17:32:48 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_H
#define FLAGTRAP_H
#include <iostream>
#include <string>
#include "ClapTrap.hpp"
class FlagTrap: public ClapTrap{
    private:
        bool guardStatus;
    public:
        FlagTrap(std::string name);
        virtual ~FlagTrap();
        FlagTrap(const  FlagTrap &a);
        FlagTrap &operator = (const FlagTrap &a);

        void highFivesGuys(void);
        void attack(const std::string& target);
};
#endif