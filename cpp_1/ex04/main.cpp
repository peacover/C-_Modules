/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 07:45:30 by yer-raki          #+#    #+#             */
/*   Updated: 2021/10/05 07:26:10 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void ft_replace(std::string &str, std::string old_str, std::string new_str)
{
	int l_ostr = old_str.length();
	int l_nstr = new_str.length();
	int pos = 0;
	int to_start = 0;
	
	while ((pos = str.find(old_str, to_start)) != (int) std::string::npos)
	{
		str.erase(pos, l_ostr);
		str.insert(pos, new_str);
		to_start = pos + l_nstr; 
	}
}

int 	main(int argc, char **argv)
{
	std::string	s1;
	std::string	s2;
	
	if (argc != 4)
		std::cout << "Invalid args!!" << std ::endl; 
	else
	{
		std::ifstream	file(argv[1]);
		std::string		myFileName;
		std::string		line;
		
		s1 = argv[2];
		s2 = argv[3];
		myFileName = strcat(argv[1], ".replace");
		if (file)
		{
			std::ofstream	myFile("./" + myFileName);
			int i = 0;
			while (getline(file, line))
			{
				ft_replace (line, s1, s2);
				if (i == 0)
					myFile << line;
				else
					myFile << std::endl << line;
				i = 1;
			}
			myFile.close();
			file.close();
		}
		else
			std::cout << "Invalid file!!" << std ::endl;
		file.close();
	}
}