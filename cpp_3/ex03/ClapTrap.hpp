/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 08:11:30 by yer-raki          #+#    #+#             */
/*   Updated: 2021/11/01 13:16:18 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

class ClapTrap
{
	public:
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & src);
		virtual ~ClapTrap();

		std::string		getName() const;
		int				getHipPoints() const;
		int				getEnergyPoints() const;
		int 			getAttackDamage() const;
		void			setName(std::string name);
		void			setHipPoints(int hp);
		void			setEnergyPoints(int ep);
		void 			setAttackDamage(int ad);
		
		ClapTrap		& operator=(ClapTrap const & rhs);
		
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	protected:
		std::string		_name;
		int				_hitPoints;
		int				_energyPoints;
		int				_attackDamage;
		ClapTrap();
};

std::ostream &	operator<<(std::ostream & o, ClapTrap const & rhs);

#endif