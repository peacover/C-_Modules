/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 14:53:03 by yer-raki          #+#    #+#             */
/*   Updated: 2021/11/11 10:34:59 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat Constractor Called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor Called" << std::endl;
}

Cat::Cat(Cat const &src)
{
	*this = src;
}

Cat	& Cat::operator=(Cat const & rhs)
{
	if (this != &rhs)
		this->_type = rhs.getType();
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Cat sound" << std::endl;
}