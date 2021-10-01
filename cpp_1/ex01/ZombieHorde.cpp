/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 08:00:40 by yer-raki          #+#    #+#             */
/*   Updated: 2021/10/01 08:16:27 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie* zombieHorde( int N, std::string name )
{
    Zombie* z = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        z[i].setNameZombie(name);
    }
    return (z);
}