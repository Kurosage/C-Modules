/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:04:42 by rmaren            #+#    #+#             */
/*   Updated: 2022/09/20 15:04:42 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template< typename Type>
class Array
{
    private:
		Type				*arr;
		unsigned int	n;
	public:
		Array(){
			n = 0;
			arr = new Type[1];
			arr[0] = 0;
		}

		Array( unsigned int n ){
            this->n = n;
            arr = new Type[n];
        }

		Array(Array const &a){
            this->n = a.arraySize();
			Type	*arr_r = a.getArr();
			arr = new Type[n];
			for (unsigned int i = 0; i < n; i++){
                arr[i] = arr_r[i];
            }
		}

		~Array(){
			delete [] this->arr;
		}

		Array &operator = (Array const &a){
			Type	*arr_r = a.getArr();
			this->n = a.arraySize();
			delete [] this->arr;
			this->arr = new Type[n];
			for (unsigned int i = 0; i < n; i++)
				arr[i] = arr_r[i];
			return (*this);
		}

		Type &operator [] (int i){
			if (i < 0 || i >= static_cast<int>(this->n)){
				throw (std::exception());
			}
			else{
                return (*(arr + i));
            }		
		}
		Type *getArr(void) const {
            return (arr); 
        }
		unsigned int arraySize(void) const {
            return (n); 
        }
};

template< typename Type >
std::ostream &operator << (std::ostream &o, Array<Type> const &a){
	for (unsigned int i = 0; i < a.arraySize(); i++){
        std::cout << "T[" << i << "] : " << (a.getArr())[i] << std::endl;
    }
	return (o);
}

#endif