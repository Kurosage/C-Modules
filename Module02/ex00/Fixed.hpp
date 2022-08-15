/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 21:26:32 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/15 22:15:14 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H
#include <iostream>

class Fixed{
    private:
        int point;
        static const int point2 = 8;
    public:
        Fixed();
        ~Fixed();
        Fixed (const Fixed &a);
        Fixed & operator = (const Fixed &a);
        int getRawBits(void) const;
        void setRawBits(int const raw);
};
#endif