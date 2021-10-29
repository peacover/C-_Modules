/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 08:27:33 by yer-raki          #+#    #+#             */
/*   Updated: 2021/10/28 07:46:15 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap	i1("admin1");
	ScavTrap	i2("admin2");

	i1.attack("user1");
	i1.takeDamage(10);
	i1.beRepaired(4);
	std::cout << i1 << std::endl;
	
	i2.attack("user2");
	i2.takeDamage(8);
	i2.beRepaired(6);
	i2.guardGate();
	std::cout << i2 << std::endl;

	return (0);
}