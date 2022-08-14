/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 21:15:37 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/14 22:19:41 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
Harl::Harl(){}
Harl::~Harl(){}
void	Harl::debug(void){
	std::cout << "[ DEBUG ]\nI love having extra bacon for my \
        7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void	Harl::info(void){
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn’t put \
        enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void	Harl::warning(void){
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. I’ve been coming for \
years whereas you started working here since last month.\n";
}

void	Harl::error(void){
	std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now.\n";
}

void	Harl::complain(std::string level)
{
	void    (Harl::*ptr[4])( void );
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	ptr[0] = &Harl::debug;
	ptr[1] = &Harl::info;
	ptr[2] = &Harl::warning;
	ptr[3] = &Harl::error;
	for (int i = 0; i < 4; i++){
		if (levels[i] == level){
			while (i < 4){
				(this->*ptr[i])();
				i++;
			}	
			break;
		}		
	}	
}