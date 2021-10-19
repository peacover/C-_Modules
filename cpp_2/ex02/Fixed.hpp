/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 08:39:15 by yer-raki          #+#    #+#             */
/*   Updated: 2021/10/19 13:56:50 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cmath>

#ifndef FIXED_H
#define FIXED_H

class Fixed
{
	public :
		Fixed();
		Fixed(int const n);
		Fixed(float const n);
		Fixed(Fixed const & src);
		~Fixed();
		
		Fixed	& operator=(Fixed const & rhs);
		Fixed	& operator+(Fixed const & rhs);
		Fixed	& operator-(Fixed const & rhs);
		Fixed	& operator*(Fixed const & rhs);
		Fixed	& operator/(Fixed const & rhs);
		bool	operator>(Fixed const & rhs);
		bool	operator<(Fixed const & rhs);
		bool	operator>=(Fixed const & rhs);
		bool	operator<=(Fixed const & rhs);
		bool	operator==(Fixed const & rhs);
		bool	operator!=(Fixed const & rhs);
		Fixed	& operator++();
		Fixed	operator++(int);
		Fixed	& operator--();
		Fixed	operator--(int);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		int		toInt(void) const;
		float	toFloat(void) const;

		static Fixed & min(Fixed & a, Fixed & b);
		static const Fixed & min(Fixed const & a, Fixed const & b);
		static Fixed & max(Fixed & a, Fixed & b);
		static const Fixed & max(Fixed const & a, Fixed const & b);
		
	private :
		int _n; //fixed point
		static const int _bits = 8; 
};

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs);

#endif