/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 09:51:25 by yer-raki          #+#    #+#             */
/*   Updated: 2021/12/13 17:51:28 by yer-raki         ###   ########.fr       */
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

Brain & Brain::operator=(Brain const & rhs) {
    for(int i = 0; i < 100 ; i++)
        _ideas[i] = rhs._ideas[i];
    return (*this);
}