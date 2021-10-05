/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 09:28:36 by yer-raki          #+#    #+#             */
/*   Updated: 2021/10/05 10:33:46 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	num_arg(std::string s)
{
	if (s == "DEBUG")
		return (1);
	else if (s == "INFO")
		return (2);
	else if (s == "WARNING")
		return (3);
	else if (s == "ERROR")
		return (4);
	return (0);
}

int main(int argc, char **argv)
{
	Karen k;

	if (argc != 2)
		std::cout << "Invalid args!" << std::endl;
	else
	{
		switch (num_arg(argv[1]))
		{
		case 1 :
			k.complain("DEBUG");
			k.complain("INFO");
			k.complain("WARNING");
			k.complain("ERROR");
			break;
		case 2 :
			k.complain("INFO");
			k.complain("WARNING");
			k.complain("ERROR");
			break;
		case 3 :
			k.complain("WARNING");
			k.complain("ERROR");
			break;
		case 4 :
			k.complain("ERROR");
			break;
		
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		}
	}
	return (0);
}