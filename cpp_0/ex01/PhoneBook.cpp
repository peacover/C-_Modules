/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:05:58 by yer-raki          #+#    #+#             */
/*   Updated: 2021/11/28 07:59:09 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	// std::cout << "PhoneBook Constractor Called" << std::endl;
	this->i = -1;
}

PhoneBook::~PhoneBook(void)
{
	// std::cout << "PhoneBook Destructor Called" << std::endl;
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

Contact	PhoneBook::getContact(int index) const
{
	return (this->contact[index]);
}

void	PhoneBook::setContact(Contact c, int index)
{
	this->contact[index] = c;
	return;
}

void	PhoneBook::redim_contact(void)
{
	Contact c;
	
	for (int i = 0; i < 7; i++)
	{
		c = getContact(i + 1);
		setContact(c, i);
	}
}

void	PhoneBook::add_contact(void)
{
	Contact c;
	std::string tmp;
	int i;
		
	std::cout << "First Name : ";
	std::cin >> tmp;
	c.setFName(tmp);
	std::cout << "Last Name : ";
	std::cin >> tmp;
	c.setLName(tmp);
	std::cout << "Nickname : ";
	std::cin >> tmp;
	c.setNName(tmp);
	std::cout << "Phone Number : ";
	std::cin >> tmp;
	c.setPNb(tmp);
	std::cout << "Darkest Secret : ";
	std::cin >> tmp;
	c.setDS(tmp);
	i = getIndex();
	setContact(c, i);
}

void	print_in_table(std::string str)
{
	int l;
	int i;
	
	l = str.size();
	for (i = 0; i < l; i++)
	{
		if (i == 9)
		{
			std::cout << ".|";
			return ;
		}
		else
			std::cout << str[i];	
	}
	if (l < 10)
	{
		for (int j = i; j < 10; j++)
			std::cout << " ";
	}
	std::cout << "|";
}

void	first_row(void)
{
	print_in_table("INDEX");
	print_in_table("FIRST NAME");
	print_in_table("LAST NAME");
	print_in_table("NICKNAME");
}

void	PhoneBook::search_contact(void)
{
	int i;
	int id;
	int max;
	Contact c;

	max = getIndex();
	first_row();
	for (i = 0; i <= max; i++)
	{
		c = getContact(i);
		std::cout << "\n";
		print_in_table(std::to_string(i));
		print_in_table(c.getFName());
		print_in_table(c.getLName());
		print_in_table(c.getNName());
	}
	std::cout << "\n\nIndex : ";
	std::cin >> id;
	std::cout << "\n";
	if (id >= 0 && id <= max)
	{
		c = getContact(id);
		print_in_table(std::to_string(id));
		print_in_table(c.getFName());
		print_in_table(c.getLName());
		print_in_table(c.getNName());
	}
	else
		std::cout << "NOT FOUND!";
	std::cout << "\n";
	return;
}