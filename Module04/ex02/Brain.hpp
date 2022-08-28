/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 22:53:36 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/28 18:02:35 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H
#include <iostream>

class Brain{
    private:
        std::string *ideas;
    public:
        Brain();
        ~Brain();
        Brain(Brain &a);
        Brain &operator = (const Brain &a);
        std::string *getIdeas();
};
#endif