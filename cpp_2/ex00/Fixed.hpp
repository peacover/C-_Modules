/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 08:39:15 by yer-raki          #+#    #+#             */
/*   Updated: 2021/10/18 09:54:20 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef FIXED_H
#define FIXED_H

class Fixed
{
	public :
		Fixed(void);
		~Fixed(void);
		Fixed(Fixed const & src);
		
		Fixed	& operator=(Fixed const & rhs);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		
	private :
		int _n;
		static const int _bits = 8;
};

#endif