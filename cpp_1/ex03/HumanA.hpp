/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 09:47:55 by yer-raki          #+#    #+#             */
/*   Updated: 2021/10/01 14:46:51 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>
#include <string>

#ifndef HUMANA_H
#define HUMANA_H
class HumanA
{
public:
	HumanA(std::string name, Weapon &w);
	~HumanA();
	void	attack();
private:
	Weapon		&_w;
	std::string	_name;
	HumanA();
};

#endif