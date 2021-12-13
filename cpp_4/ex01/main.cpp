/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 14:53:09 by yer-raki          #+#    #+#             */
/*   Updated: 2021/12/13 18:18:30 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"
#include "cat.hpp"
#include "WrongCat.hpp"
int main()
{
	// int i;
	// Animal *a[20];
	
	// for (i = 0; i < 20; i++)
	// {
	// 	if (i % 2)
	// 		a[i] = new Dog();
	// 	else
	// 		a[i] = new Cat();
	// }
	
	// for (i = 0; i < 20; i++)
	// 	delete a[i];

	const Animal* j = new Cat();
	const Animal* i = new Cat();	
	
	i = j;
	std::cout << &i << std::endl;
	std::cout << &j << std::endl;

	// print i

	
	// delete j;//should not create a leak
	// delete i;


	// const Animal* meta = new Animal();
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// const WrongAnimal* test = new WrongCat();
	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// i->makeSound();
	// j->makeSound();
	// meta->makeSound();
	// test->makeSound();
	// delete i;
	// delete j;
	// delete test;
	// delete meta;
}