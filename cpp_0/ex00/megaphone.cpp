/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 07:20:37 by yer-raki          #+#    #+#             */
/*   Updated: 2021/09/20 07:19:53 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	int i;
	int j;
	
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		i = 0;
		while (++i < argc)
		{
			j = -1;
			while (argv[i][++j])
			{
				if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
					std::cout << (char)toupper(argv[i][j]);
				else
					std::cout << argv[i][j];
			}
		}
		std::cout << std::endl;
	}
	return (0);
}
