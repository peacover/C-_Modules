/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:05:58 by yer-raki          #+#    #+#             */
/*   Updated: 2021/09/21 17:29:44 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	// std::cout << "Constractor Called" << std::endl;
	this->i = 0;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	// std::cout << "Destructor Called" << std::endl;
	return ;
}

int	PhoneBook::getIndex(void) const
{
	return (this->i);
}

void	PhoneBook::setIndex(int i)
{
	this->i = i;
	return;
}

void	PhoneBook::add_contact(void)
{
	Contact c;
	std::string tmp;
	
	std::cout << "First Name : ";
	std::cin >> tmp;
	c.setFName(tmp);
	std::cout << "\nLast Name : ";
	std::cin >> tmp;
	c.setLName(tmp);
	std::cout << "\nNickname : ";
	std::cin >> tmp;
	c.setNName(tmp);
	std::cout << "\nPhone Number : ";
	std::cin >> tmp;
	c.setPNb(tmp);
	std::cout << "\nDarkest Secret : ";
	std::cin >> tmp;
	c.setDS(tmp);
}

void	PhoneBook::search_contact(void)
{
	
}