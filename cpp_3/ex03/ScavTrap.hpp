/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 10:38:23 by yer-raki          #+#    #+#             */
/*   Updated: 2021/11/01 13:15:16 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string>


#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & src);
		virtual ~ScavTrap();
		
		void	guardGate();
	protected:
		ScavTrap();
};

#endif