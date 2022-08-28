/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 22:56:05 by rmaren            #+#    #+#             */
/*   Updated: 2022/08/28 18:25:13 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    this->ideas = new std::string[100]; 
    for (int i = 0; i < 100; i++){
        this->ideas[i] = "Idea number : " + std::to_string(i); 
    }
    std::cout << "Brain default constructor called\n";
}
Brain::~Brain(){
    delete [](this->ideas);
    std::cout << "Brain destructor called\n";
}
Brain::Brain(Brain &a){
    std::string *a_ideas = a.getIdeas();
    this->ideas = new std::string[100];
    for (int i = 0; i < 100; i++){
        this->ideas[i] = " Copy " + a_ideas[i] ; 
    }
    std::cout << "Brain copy constructor called\n";
}
Brain &Brain::operator = (const Brain &a){
    for (int i = 0; i < 100; i++){
        this->ideas[i] = a.ideas[i]; 
    }
    std::cout << "Brain copy assignment operator called\n";
	return *this;
    
}
std::string *Brain::getIdeas(){
    return this->ideas;
}