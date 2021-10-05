/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 09:48:01 by yer-raki          #+#    #+#             */
/*   Updated: 2021/10/01 15:28:39 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>
#include <string>

HumanB::HumanB(std::string name) : _name(name)
{
 
}

HumanB::~HumanB()
{
	
}

void	HumanB::setWeapon(Weapon &w)
{
	this->_w = &w;
}

void	HumanB::attack(void)
{
	std::cout << this->_name << " attacks with his " << this->_w->getType() << std::endl;
}