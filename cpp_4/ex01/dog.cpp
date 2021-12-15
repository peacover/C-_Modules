/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 14:53:07 by yer-raki          #+#    #+#             */
/*   Updated: 2021/12/13 18:43:53 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"

Dog::Dog() : Animal("Dog")
{
	_br = new Brain();
	std::cout << "Dog Constractor Called" << std::endl;
}

Dog::~Dog()
{
	delete _br;
	std::cout << "Dog Destructor Called" << std::endl;
}

Dog::Dog(Dog const &src)
{
	*this = src;
}

Dog	& Dog::operator=(Dog const & rhs)
{
	
	if (this != &rhs)
	{
		this->_type = rhs.getType();
		// _br = new Brain(*(rhs._br));
		// _br = rhs._br;
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Dog sound" << std::endl;
}