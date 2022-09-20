/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:25:53 by rmaren            #+#    #+#             */
/*   Updated: 2022/09/20 15:29:58 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <algorithm>
#include <iostream>
#include <stack>
#include <vector>
#include <iterator>

template <class T>
class MutantStack : public std::stack<T>
{
    public:
        typedef std::stack<T> stack;
        typedef typename stack::container_type container;
        typedef typename container::iterator iterator;
        MutantStack(): stack(){
        }

        MutantStack(const stack &a): stack(){
            (void)a;
        }

        ~MutantStack(){}

        stack &operator = (const stack &a){
            if (*this != a)
                *this = a;
            return (*this);
        }

        iterator begin(){
            return (stack::c.begin());
        }

        iterator end(){
            return (stack::c.end());
        }
};

#endif