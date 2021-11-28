/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 14:53:07 by yer-raki          #+#    #+#             */
/*   Updated: 2021/11/11 10:35:47 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog Constractor Called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor Called" << std::endl;
}

Dog::Dog(Dog const &src)
{
	*this = src;
}

Dog	& Dog::operator=(Dog const & rhs)
{
	if (this != &rhs)
		this->_type = rhs.getType();
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Dog sound" << std::endl;
}