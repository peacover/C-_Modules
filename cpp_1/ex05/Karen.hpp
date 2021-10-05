/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 07:38:27 by yer-raki          #+#    #+#             */
/*   Updated: 2021/10/05 08:57:31 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef KAREN_H
#define KAREN_H

class Karen
{
	public:
		Karen();
		~Karen();
		void complain( std::string level );
	
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
};

#endif