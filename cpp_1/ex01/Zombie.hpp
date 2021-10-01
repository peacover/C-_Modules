/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 09:30:23 by yer-raki          #+#    #+#             */
/*   Updated: 2021/10/01 08:13:36 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef ZOMBIE_H
#define ZOMBIE_H

class Zombie
{
	public:
		Zombie();
		~Zombie(void);
		std::string	getNameZombie(void) const;
		void		setNameZombie(std::string name);
		void		annonce(void);
	private:
		std::string _name;
};

Zombie  *newZombie(std::string name);
Zombie* zombieHorde( int N, std::string name );

#endif