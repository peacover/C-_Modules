/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 10:24:27 by yer-raki          #+#    #+#             */
/*   Updated: 2021/10/01 07:50:36 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie()
{
	// std::cout << "Constructor Called " << this->_name << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " : Destructor Called" <<std::endl;
}

std::string Zombie::getNameZombie(void) const
{
	return (this->_name);
}

void		Zombie::setNameZombie(std::string name)
{
	this->_name = name;
}

void Zombie::annonce(void)
{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}