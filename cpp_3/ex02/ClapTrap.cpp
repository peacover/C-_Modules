/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 08:26:45 by yer-raki          #+#    #+#             */
/*   Updated: 2021/10/28 07:36:28 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name) , _hitPoints(10), _energyPoints(10) , _attackDamage(0)
{
	std::cout << "Constractor Called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor Called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	*this = src;
}

ClapTrap::ClapTrap()
{
	
}

std::string	ClapTrap::getName() const
{
	return(this->_name);
}

int ClapTrap::getHipPoints() const
{
	return(this->_hitPoints);
}

int ClapTrap::getEnergyPoints() const
{
	return(this->_energyPoints);
}

int	ClapTrap::getAttackDamage() const
{
	return(this->_attackDamage);
}

void	ClapTrap::setName(std::string name)
{
	this->_name = name;
}
void	ClapTrap::setHipPoints(int hp)
{
	this->_hitPoints = hp;
}

void	ClapTrap::setEnergyPoints(int ep)
{
	this->_energyPoints = ep;
}

void	ClapTrap::setAttackDamage(int ad)
{
	this->_attackDamage = ad;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_hitPoints = rhs.getHipPoints();
		this->_energyPoints = rhs.getEnergyPoints();
		this->_attackDamage = rhs.getAttackDamage();
	}
	return (*this);
}

std::ostream &	operator<<(std::ostream & o, ClapTrap const & rhs)
{
	o << rhs.getName() << " ";
	o << rhs.getHipPoints() << " ";
	o << rhs.getEnergyPoints() << " ";
	o << rhs.getAttackDamage();
	return o;
}

void ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << _name << " attack " << target << " , causing " << _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << _name << " is damaged by " << amount << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << _name << " is healing " << amount << std::endl;
}