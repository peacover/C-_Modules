/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 13:30:36 by yer-raki          #+#    #+#             */
/*   Updated: 2021/10/01 07:51:55 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

int main(void)
{
	Zombie *z;

	z = newZombie("Thomas");
	z->annonce();
	delete z;
	randomChump("Arthur");
	return (0);
}