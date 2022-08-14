/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 23:38:44 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/14 22:16:00 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl newharl;
    if (argc == 2){
        newharl.complain(argv[1]);
    }
    else{
        std::cout<< "Incorrect number of arguments\n";
    }
    
    return 0;
}