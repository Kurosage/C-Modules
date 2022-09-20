/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:04:21 by rmaren            #+#    #+#             */
/*   Updated: 2022/09/20 15:04:21 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP
#include <iostream>

template< typename Type >
void swap(Type  & a, Type & b){
	Type tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template< typename Type >
Type const &	min(Type const & a, Type const & b) {
	return (a < b? a : b);
}

template< typename T >
T const &	max( T const & a, T const & b) {
	return (a>b ? a : b);
}

#endif