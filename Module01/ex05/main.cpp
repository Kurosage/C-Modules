/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 23:38:44 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/14 21:42:16 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl newharl;

    std::cout << "DEBUG\n";
    newharl.complain("DEBUG");
    std::cout << "INFO\n";
    newharl.complain("INFO");
    std::cout << "WARNING\n";
    newharl.complain("WARNING");
    std::cout << "ERROR\n";
    newharl.complain("ERROR");
    return 0;
}