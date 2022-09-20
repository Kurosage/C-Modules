/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <rmaren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:25:40 by rmaren            #+#    #+#             */
/*   Updated: 2022/09/20 15:25:41 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm> 
# include <vector>
# include <iterator>
# include <cmath>

typedef std::vector<int>::iterator my_iter;

class Span
{
	private:
		std::vector<int> vec;
		unsigned int N;
		unsigned int position;
	public:
		Span(unsigned int N);		
        ~Span();
		Span(const Span &a);
		Span &operator = (const Span &a);

		void addNumber(int number);
        void addNumber(unsigned int range,time_t time);
		int shortestSpan()const;
		unsigned int longestSpan()const;
		unsigned int getN()const;
		unsigned int getPosition()const;
        void showVector();
	class	VectorCreateException : public std::exception
	{
		public:
			virtual const char	*what() const throw();
	};
	class	VectorCountException : public std::exception
	{
		public:
			virtual const char	*what() const throw();
	};
};
#endif