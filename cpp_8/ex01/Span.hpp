/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 09:37:45 by yer-raki          #+#    #+#             */
/*   Updated: 2022/02/14 11:03:42 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <exception>
class Span
{
    public:
		Span();
        Span(unsigned int N);
        ~Span();
        Span(Span const & src);
        Span	&operator=(Span const & src);
		
		void	addNumber(int N);
		int	shortestSpan();
		int	longestSpan();
		class FullSpanException : public std::exception
		{
			public:
				const char * what() const throw()
				{
					return ("FullSpanException");
				}
		};
		class InsufficientElementsException : public std::exception
		{
			public:
				const char * what() const throw()
				{
					return ("InsufficientElementsException");
				}
		};
    private:
        std::vector<int>	_vec;
        unsigned int		_len;
		
};

#endif
