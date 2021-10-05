/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 09:48:15 by yer-raki          #+#    #+#             */
/*   Updated: 2021/10/01 13:24:43 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef WEAPON_H
#define WEAPON_H
class Weapon
{
	public:
		Weapon();
		Weapon(std::string type);
		~Weapon();
		const std::string	&getType() const;
		void				setType(std::string type);
	private:
		std::string _type;
};
#endif
