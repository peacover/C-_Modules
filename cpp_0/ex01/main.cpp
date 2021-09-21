/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 08:27:56 by yer-raki          #+#    #+#             */
/*   Updated: 2021/09/21 17:30:10 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main()
{
	PhoneBook Pb;
	std::string inp;
	
	while (1)
	{
		std::cout << "Enter your command (ADD | SEARCH | EXIT) : \n";
		std::cin >> inp;
		
		if (inp == "ADD")
		{
			Pb.add_contact();
			Pb.setIndex(Pb.getIndex() + 1);
		}
		else if (inp == "SEARCH")
			Pb.search_contact();
		else if (inp == "EXIT")
			return(0);
		else
			std::cout << "Invalid input!\n\n";
	}
	return (0);
}