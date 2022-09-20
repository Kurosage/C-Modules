/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:04:26 by rmaren            #+#    #+#             */
/*   Updated: 2022/09/20 15:04:26 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
#include <iostream>

template< typename Type>
void iter(Type *arr, int arrLen, void func(Type const &a))
{
	for(int i = 0; i < arrLen; i++)
		func(arr[i]);
}

#endif