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