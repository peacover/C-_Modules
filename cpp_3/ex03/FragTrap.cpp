/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 08:32:53 by yer-raki          #+#    #+#             */
/*   Updated: 2021/10/28 08:14:24 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name) 
{
	std::cout << "FragTrap constructor called!\n";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap( const FragTrap & src )
{
	*this = src;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called!\n";
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "high fives" << std::endl;
}