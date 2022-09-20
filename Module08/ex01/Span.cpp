/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:25:37 by rmaren            #+#    #+#             */
/*   Updated: 2022/09/20 15:38:18 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <time.h>
#include <limits.h>
Span::Span(unsigned int N){
    this->N = N;
    this->position = 0;
	this->vec.reserve(this->getN());
}

Span::Span(const Span &a){
    this->N = a.getN();
    this->position = a.getPosition();
	*this = a;
}

Span::~Span(){}

Span	&Span::operator = (const Span &a)
{
	if (this == &a)
		return *this;
	return *this;
}

void	Span::addNumber(int number)
{
	if ((this->position != 0 && this->vec.empty() == true) || this->vec.max_size() < this->getN())
		throw (Span::VectorCreateException());
	if (this->getPosition() + 1 > this->getN())
		throw (std::range_error("Array has N elemnts, you can't add more"));
	else
	{
		this->position++;
		this->vec.push_back(number);
	}
}

void	Span::addNumber(unsigned int range,time_t time)
{
	srand(time);
	for (size_t i = 0; i < range; i++)
	{
		try
		{
			addNumber(rand());
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}

int	Span::shortestSpan(void) const
{
	if (this->position == 1 || this->vec.size() == 1)
		throw (Span::VectorCountException());
	std::vector<int> v(this->vec);
	std::sort (v.begin(), v.end());
	unsigned int max = UINT_MAX;
	std::vector<int>::iterator iter = v.begin();
	std::vector<int>::iterator next_iter = v.begin() + 1;
	while (next_iter != v.end())
	{
		if ((unsigned int)(*next_iter - *iter) < max)
			max = *next_iter - *iter;
		++next_iter;
		++iter;
	}
	return (max);
}

unsigned int	Span::longestSpan(void)const
{
	if (this->position == 1 || this->vec.size() == 1)
		throw (Span::VectorCountException());
	std::vector<int> v(this->vec);			
	int low, high;
	std::sort (v.rbegin(), v.rend());
	high = *v.begin();
	std::sort (v.begin(), v.end());
	low = *v.begin();
	return (high - low);
}

unsigned int Span::getN() const{
	return (this->N);
}

unsigned int Span::getPosition() const{
	return (this->position);
}
void Span::showVector(){
    std::vector<int> v(this->vec);
    int i = 1;
    for (std::vector<int>::iterator it = v.begin() ; it!=v.end() ; ++it){
        std::cout<<i<<" : "<< *it <<std::endl;
        i++;
    }
}

const char	*Span::VectorCreateException::what() const throw()
{
	return ("Vector has incorrect position or lenger than number N");
}

const char	*Span::VectorCountException::what() const throw()
{
	return ("Not enough elements in vector");
}

