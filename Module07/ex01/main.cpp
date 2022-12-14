/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:04:32 by rmaren            #+#    #+#             */
/*   Updated: 2022/09/20 15:04:33 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>  
template< typename Type>
void	func(Type const &a)
{
    std::cout << "array element: "<< a << "\n";
}

int main( void ) {
    int			intA[5] = {1, 2, 3, 4, 5 };
	char		charA[4] = {'c','h','a','r'};
	std::string	stringA[5] = {"abc", "bcd", "cde", "def","efg"};

	iter(intA,5,func);
	iter(charA,4,func);
    iter(stringA,5,func);
    return 0;
}
