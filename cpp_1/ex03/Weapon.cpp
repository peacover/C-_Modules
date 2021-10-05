/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 09:48:12 by yer-raki          #+#    #+#             */
/*   Updated: 2021/10/01 12:56:57 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>
#include <string>

Weapon::Weapon()
{
    
}

Weapon::Weapon(std::string type) : _type(type)
{
    
}

Weapon::~Weapon()
{
    
}

const std::string	&Weapon::getType() const
{
	return (this->_type);
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}