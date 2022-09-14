#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iostream>
# include <list>
# include <iterator>
# include <vector>
# include <array>


template <typename T>
typename T::const_iterator easyfind(T const &a, int n){
	typename T::const_iterator end = a.end();
    typename T::const_iterator begin = a.begin();
	typename T::const_iterator iter = std::find(begin, end, n);
    if (iter == end){
        throw(std::out_of_range("Out of range"));
    }
    return (iter);
}


#endif