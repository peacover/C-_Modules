/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 09:14:34 by yer-raki          #+#    #+#             */
/*   Updated: 2021/10/01 09:28:22 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR;
	stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "the address in memory of the string : " << &str << std::endl;
	std::cout << "the address of the string by using stringPTR : " << stringPTR << std::endl;
	std::cout << "the address of the string by using stringREF : " << &stringREF << std::endl;

	std::cout << "the string using the pointer : " << *stringPTR << std::endl;
	std::cout << "the string using the reference : " << stringREF << std::endl;
	return (0);
}