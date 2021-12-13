/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 14:53:03 by yer-raki          #+#    #+#             */
/*   Updated: 2021/12/13 17:45:29 by yer-raki         ###   ########.fr       */
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
	*this = src;
	// operator=(src);
}

Cat	& Cat::operator=(Cat const & rhs)
{
	_br = new Brain(*(rhs._br));
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Cat sound" << std::endl;
}