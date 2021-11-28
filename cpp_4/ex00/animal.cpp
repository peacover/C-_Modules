/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:49:05 by yer-raki          #+#    #+#             */
/*   Updated: 2021/11/24 15:00:21 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

Animal::Animal()
{
	std::cout << "Animal Constractor Called" << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Animal Constractor Called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor Called" << std::endl;
}

Animal::Animal(Animal const &src)
{
	*this = src;
}

std::string		Animal::getType() const
{
	return(this->_type);
}

void	Animal::makeSound() const
{
	std::cout << "Animal sound" << std::endl;
}

Animal &	Animal::operator=(Animal const & rhs)
{
	if (this != &rhs)
		this->_type = rhs.getType();
	return (*this);
}
