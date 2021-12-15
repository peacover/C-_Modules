/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 09:51:25 by yer-raki          #+#    #+#             */
/*   Updated: 2021/12/15 10:02:27 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    for (int i = 0; i < 100 ; i++ ) 
        _ideas[i] = std::to_string(i);
    return ;
}

Brain::Brain(Brain const & src)
{
    *this = src;
}

Brain::~Brain()
{
    
}

std::string Brain::getIdeas() const
{
    // std::cout << _ideas[0] << std::endl;
    return (*_ideas);
}

void    Brain::setIdea(std::string idea)
{
    for(int i = 0; i < 100; i++)
        _ideas[i] = idea;
}

Brain & Brain::operator=(Brain const & rhs)
{
    for(int i = 0; i < 100; i++)
        _ideas[i] = rhs._ideas[i];
    return (*this);
}