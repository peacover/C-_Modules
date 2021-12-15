/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 14:53:03 by yer-raki          #+#    #+#             */
/*   Updated: 2021/12/15 10:48:19 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"

Cat::Cat() : Animal("Cat")
{
	_br = new Brain();
	std::cout << "Cat Constractor Called" << std::endl;
}

Cat::~Cat()
{
	delete _br;
	std::cout << "Cat Destructor Called" << std::endl;
}

Cat::Cat(Cat const &src)
{
	std::cout << "Cat Copy Constractor Called" << std::endl;
	*this = src;
	// operator=(src);
}

std::string Cat::getBrain() const
{
	return (_br->getIdeas());
}

void    Cat::setBrain(std::string idea)
{
	for(int i = 0; i < 100; i++)
		_br->setIdea(idea); 
}

Cat	& Cat::operator=(Cat const & rhs)
{
	if (this == &rhs)
		return (*this);
	this->_type = rhs.getType();
	if (_br)
		delete _br;
	_br = new Brain(*rhs._br);
	// _br = rhs._br;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Cat sound" << std::endl;
}