/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 08:40:46 by yer-raki          #+#    #+#             */
/*   Updated: 2021/11/01 13:31:19 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name)
{
	std::cout << "DiamondTrap constructor called!\n";
	_name = name;
	ClapTrap::_name = name + "_clap_name";
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src)
{
	*this = src;
}

DiamondTrap::~DiamondTrap()
{
	
}

void 	DiamondTrap::attack(std::string const & target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::takeDamage(unsigned int amount)
{
	std::cout << "DiamondTrap " << _name << " is damaged by " << amount << std::endl;
}

void DiamondTrap::beRepaired(unsigned int amount)
{
	std::cout << "DiamondTrap " << _name << " is healing " << amount << std::endl;
}

void DiamondTrap::guardGate()
{
	ScavTrap::guardGate();
}

void DiamondTrap::highFivesGuys(void)
{
	FragTrap::highFivesGuys();
}

void DiamondTrap::whoAmI()
{
	std::cout << "My name is " << _name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}


