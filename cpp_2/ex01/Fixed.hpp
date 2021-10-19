/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 08:39:15 by yer-raki          #+#    #+#             */
/*   Updated: 2021/10/19 10:41:52 by yer-raki         ###   ########.fr       */
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

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		int		toInt(void) const;
		float	toFloat(void) const;
		
	private :
		int _n; //fixed point
		static const int _bits = 8; 
};

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs);

#endif