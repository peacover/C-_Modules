/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 08:29:46 by yer-raki          #+#    #+#             */
/*   Updated: 2021/11/01 13:15:23 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>


#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap(std::string name);
		FragTrap(FragTrap const & src);
		virtual ~FragTrap();
		
		void highFivesGuys(void);
	protected:
		FragTrap();
};

#endif

