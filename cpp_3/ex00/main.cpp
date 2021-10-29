/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 08:27:33 by yer-raki          #+#    #+#             */
/*   Updated: 2021/10/28 07:37:26 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	Instance("user1");

	Instance.attack("user2");
	Instance.takeDamage(7);
	Instance.beRepaired(5);
	
	std::cout << Instance << std::endl;
	return 0;
}