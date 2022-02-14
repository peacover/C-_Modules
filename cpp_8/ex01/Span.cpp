/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 09:37:43 by yer-raki          #+#    #+#             */
/*   Updated: 2022/02/14 11:04:59 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _vec(0), _len(0)
{
    
}

Span::~Span()
{
    
}

Span::Span(Span const &src)
{
    *this = src;   
}

Span::Span(unsigned int N) : _len(N)
{
	if (N < 2)
		throw InsufficientElementsException();
	else
	{
		std::vector<int> tmp(N - 2, 10);
		_vec = tmp;
		tmp.clear();
		// tmp.erase(tmp.begin(), tmp.end());
		// tmp.shrink_to_fit(); // c+11
	}
}

Span &Span::operator=(Span const &src)
{
    if (this != &src)
    {
        _len = src._len;
        _vec = src._vec;
    }
    return (*this);
}

void	Span::addNumber(int N)
{
	if (_vec.size() + 1 > _len)
		throw FullSpanException();
	else
		_vec.push_back(N);
}

int	Span::shortestSpan()
{
	std::vector<int> tmp;

	tmp = _vec;
	sort(tmp.begin(), tmp.end());
	return (tmp[1] - tmp[0]);
}

int	Span::longestSpan()
{
	std::vector<int> tmp;

	tmp = _vec;
	sort(tmp.begin(), tmp.end());
	return (tmp[tmp.size() - 1] - tmp[0]);
}