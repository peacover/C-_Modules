/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 09:47:49 by yer-raki          #+#    #+#             */
/*   Updated: 2021/10/01 15:10:02 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>
#include <string>

HumanA::HumanA(std::string name, Weapon &w) : _w(w), _name(name)
{
	
}

HumanA::~HumanA()
{
	
}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with his " << this->_w.getType() << std::endl;
}