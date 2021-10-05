/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 09:48:03 by yer-raki          #+#    #+#             */
/*   Updated: 2021/10/01 15:28:45 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>
#include <string>

#ifndef HUMANB_H
#define HUMANB_H

class HumanB
{
public:
	HumanB(std::string name);
	~HumanB();
	void	setWeapon(Weapon &w);
	void	attack();
private:
	Weapon		*_w;
	std::string	_name;
	HumanB();
	
};

#endif