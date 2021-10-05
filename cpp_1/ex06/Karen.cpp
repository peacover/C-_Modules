/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 09:26:48 by yer-raki          #+#    #+#             */
/*   Updated: 2021/10/05 10:36:20 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{
	
}

Karen::~Karen()
{
	
}

void	Karen::debug(void)
{
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI just love it!\n\n";
}

void	Karen::info(void)
{
	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extrabacon cost more money.\nYou don’t put enough! If you did I would not have to ask for it!\n\n";
}

void	Karen::warning(void)
{
	std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming here for years and you just started working here last month.\n\n";
}

void	Karen::error(void)
{
	std::cout << "[ ERROR ]\n";
	std::cout << "This is unacceptable, I want to speak to the manager now.\n\n";
}

void	Karen::complain(std::string level)
{
	std::string	tmp[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Karen::*f[])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};

	for (int i = 0; i < 4; i++)
	{
		if (tmp[i] == level)
		{
			(this->*f[i])();
			return ;
		}
	}

}