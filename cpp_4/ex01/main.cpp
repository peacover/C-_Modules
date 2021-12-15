/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 14:53:09 by yer-raki          #+#    #+#             */
/*   Updated: 2021/12/15 10:50:28 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"
#include "cat.hpp"
#include "WrongCat.hpp"

int main()
{
	int i;
	Animal *a[4];
	
	for (i = 0; i < 4; i++)
	{
		if (i % 2)
			a[i] = new Dog();
		else
			a[i] = new Cat();
	}
	std::cout << "-----------------------------------" << std::endl;
	for (i = 0; i < 4; i++)
		delete a[i];
	
	// Cat *j = new Cat();
	// Cat c(*j);

	// std::cout << "old : " << j->getBrain() << std::endl;
	// std::cout << "copy : " << c.getBrain() << std::endl;
	// std::cout << "-----------------------------------" << std::endl;
	// j->setBrain("test");
	// std::cout << "new : " << j->getBrain() << std::endl;
	// std::cout << "old copy : " << c.getBrain() << std::endl;
	// delete j;
}