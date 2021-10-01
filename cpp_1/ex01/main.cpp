/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 13:30:36 by yer-raki          #+#    #+#             */
/*   Updated: 2021/10/01 08:23:22 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

int main(void)
{
	Zombie *z;

	z = zombieHorde(6, "FNC");
	for (int i = 0 ; i < 6 ; i++)
		z[i].annonce();
	delete [] z;
	return (0);
}