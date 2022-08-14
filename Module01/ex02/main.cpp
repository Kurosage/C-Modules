/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 22:08:48 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/12 22:08:48 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstring>
int main(){
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout << &str << "\n";
    std::cout << stringPTR << "\n";
    std::cout << &stringREF << "\n";
    std::cout << str << "\n";
    std::cout << *stringPTR << "\n";
    std::cout << stringREF << "\n";
    return (0);
}