/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 08:39:12 by yer-raki          #+#    #+#             */
/*   Updated: 2021/10/19 13:56:37 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _n(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n)
{
	// std::cout << "Int constructor called" << std::endl;
	this->setRawBits(n * (1 << this->_bits));
}

Fixed::Fixed(const float n)
{
	// std::cout << "Float constructor called" << std::endl;
	this->setRawBits(roundf(n * (1 << this->_bits)));
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src)
{
	// std::cout << "Copy constructor called" << std::endl;
	// this->_n = src._n;
	// operator=(src);
	*this = src;
}


Fixed & Fixed::operator=(Fixed const & rhs)
{
	// std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
		this->_n = rhs.getRawBits();
	return (*this);
}

Fixed & Fixed::operator+(Fixed const & rhs)
{
	// std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
		this->_n = ((this->toFloat()) + (rhs.toFloat()) * (1 << this->_bits));		
	return (*this);
}

Fixed & Fixed::operator-(Fixed const & rhs)
{
	// std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
		this->_n = ((this->toFloat()) - (rhs.toFloat()) * (1 << this->_bits));
	return (*this);
}

Fixed & Fixed::operator*(Fixed const & rhs)
{
	// std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
		this->_n = ((this->toFloat()) * (rhs.toFloat()) * (1 << this->_bits));
	return (*this);
}

Fixed & Fixed::operator/(Fixed const & rhs)
{
	// std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
		this->_n = ((this->toFloat()) / (rhs.toFloat()) * (1 << this->_bits));
	return (*this);
}

bool	Fixed::operator>(Fixed const & rhs)
{
	return (this->toFloat() > rhs.toFloat());
}

bool	Fixed::operator>=(Fixed const & rhs)
{
	return (this->toFloat() >= rhs.toFloat());
}

bool	Fixed::operator<(Fixed const & rhs)
{
	return (this->toFloat() < rhs.toFloat());
}

bool	Fixed::operator<=(Fixed const & rhs)
{
	return (this->toFloat() <= rhs.toFloat());
}

bool	Fixed::operator==(Fixed const & rhs)
{
	return (this->toFloat() == rhs.toFloat());
}

bool	Fixed::operator!=(Fixed const & rhs)
{
	return (this->toFloat() != rhs.toFloat());
}

Fixed	& Fixed::operator++()
{
	this->_n++;
	return(*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp;
	tmp = *this;
	++this->_n;
	return(tmp);
}

Fixed	& Fixed::operator--()
{
	this->_n--;
	return(*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp;
	tmp = *this;
	--this->_n;
	return(tmp);
}

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return o;
}

int		Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->_n);
}

void	Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
	this->_n = raw;
}

int		Fixed::toInt() const
{
	return ((int)(getRawBits() / (1 << this->_bits)));
}

float	Fixed::toFloat() const
{
	return ((float)(getRawBits() / (float)(1 << this->_bits)));
}

Fixed &	Fixed::min(Fixed & a, Fixed & b)
{
	if (a.toFloat() <= b.toFloat())
		return (a);
	return (b);
}

Fixed const &	Fixed::min(Fixed const & a, Fixed const & b)
{
	if (a.toFloat() <= b.toFloat())
		return (a);
	return (b);
}

Fixed &	Fixed::max(Fixed & a, Fixed & b)
{
	if (a.toFloat() >= b.toFloat())
		return (a);
	return (b);
}

Fixed const &	Fixed::max(Fixed const & a, Fixed const & b)
{
	if (a.toFloat() >= b.toFloat())
		return (a);
	return (b);
}