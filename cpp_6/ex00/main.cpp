/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 11:59:06 by yer-raki          #+#    #+#             */
/*   Updated: 2022/02/05 16:48:09 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
#include <limits>


int	is_char(std::string arg)
{
	if (arg.length() == 1 && !(arg[0] >= '0' && arg[0] <= '9'))
		return (1);
	return (0);
}

int	is_float(std::string arg)
{
	size_t		pos_p;
	
	pos_p = arg.find('.');
	if (pos_p != std::string::npos)
	{
		std::string s1 = arg.substr(0, pos_p);
		std::string s2 = arg.substr(pos_p + 1, arg.length() - pos_p - 2);
		if (s1.find_first_not_of("-+0123456789") == std::string::npos &&
			s2.find_first_not_of("-+0123456789") == std::string::npos && arg[arg.length() - 1] == 'f')
		{
			// try
			// {
			// 	if (stod(s1) < std::numeric_limits<float>::min() || stod(s1) > std::numeric_limits<float>::max())
			// 		return (0);
			// }
			// catch(const std::exception& e)
			// {
			// 	return (0);
			// }
			return (1);
		}
		return (0);
	}
	return (0);	
}

int	is_double(std::string arg)
{
	// double	d;
	size_t		pos_p;

	// try
	// {
	// 	if (is_char(arg))
	// 		d = static_cast<double>(arg[0]);
	// 	else
	// 		d = static_cast<double>(stod(arg));
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << "OUT OF LIMITS !!" << '\n';
	// 	return (3);
	// }
	pos_p = arg.find('.');
	if (pos_p != std::string::npos)
	{
		std::string s1 = arg.substr(0, pos_p);
		std::string s2 = arg.substr(pos_p + 1);
		if (s1.find_first_not_of("-+0123456789") == std::string::npos  && s2.find_first_not_of("-+0123456789") == std::string::npos)
		{
			// try
			// {
			// 	if (stod(s1) < std::numeric_limits<double>::min() || stod(s1) > std::numeric_limits<double>::max())
			// 		return (0);
			// }
			// catch(const std::exception& e)
			// {
			// 	return (0);
			// }
			
			return (1);
		}
		return (0);
	}
	return (0);
}

int	is_int(std::string arg)
{
	if (arg.find_first_not_of("-+0123456789") == std::string::npos)
	{
		return (1);
	}
	return (0);
}

bool	is_special_float(std::string arg)
{
	if (arg == "nanf" || arg == "-inff" || arg == "+inff")
		return (true);
	return (false);
}

bool	is_special_double(std::string arg)
{
	if (arg == "nan" || arg == "-inf" || arg == "+inf")
		return (true);
	return (false);
}

void	handling_special_float_double(std::string arg)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (is_special_float(arg))
	{
		std::cout << "float: " << arg << std::endl;
		std::cout << "double: " << arg.substr(0, arg.length() - 1) << std::endl;
	}
	else
	{
		std::cout << "float: " << arg + "f" << std::endl;
		std::cout << "double: " << arg << std::endl;
	}
}

void	handling_char(std::string arg)
{
	char c = '\0';

	if (is_char(arg))
		c = static_cast<char>(arg[0]);
	else if (is_int(arg))
	{
		try
		{
			c = static_cast<int>(stoi(arg));
		}
		catch(const std::exception& e)
		{
			std::cout << "char: impossible" << std::endl;
			return;
		}
		if (stoi(arg) < 0 || stoi(arg) > 127)
		{
			std::cout << "char: impossible" << std::endl;
			return;
		}
		if (!isprint(c))
		{
			std::cout << "char: Non displayable" << std::endl;
			return;
		}
		c = static_cast<int>(stoi(arg));
	}
	else if (is_float(arg))
	{
		try
		{
			c = static_cast<float>(stof(arg));
		}
		catch(const std::exception& e)
		{
			std::cout << "char: impossible" << std::endl;
			return;
		}
		if (stof(arg) < 0 || stof(arg) > 127)
		{
			std::cout << "char: impossible" << std::endl;
			return;
		}
		if (stof(arg) >= 0 && stof(arg) <= 32)
		{
			std::cout << "char: Non displayable" << std::endl;
			return;
		}
	}
	else if (is_double(arg))
	{
		try
		{
			c = static_cast<double>(stod(arg));
		}
		catch(const std::exception& e)
		{
			std::cout << "char: impossible" << std::endl;
			return;
		}
		if (stod(arg) < 0 || stod(arg) > 127)
		{
			std::cout << "char: impossible" << std::endl;
			return;
		}
		if ((stod(arg) >= 0 && stod(arg) <= 32))
		{
			std::cout << "char: Non displayable" << std::endl;
			return;
		}
	}
	else
	{
		std::cout << "char: impossible" << std::endl;
		return;
	}
	std::cout << "char: '" << c << "'" << std::endl;
}

void	handling_int(std::string arg)
{
	int i;

	if (is_char(arg))
		i = static_cast<int>(arg[0]);
	else if (is_int(arg))
	{
		try
		{
			i = static_cast<int>(stoi(arg));
		}
		catch(const std::exception& e)
		{
			std::cout << "int: impossible" << std::endl;
			return;
		}
	}
	else if (is_float(arg))
	{
		try
		{
			i = static_cast<int>(stoi(arg));
		}
		catch(const std::exception& e)
		{
			std::cout << "int: impossible" << std::endl;
			return;
		}	
	}
	else if (is_double(arg))
	{
		try
		{
			i = static_cast<int>(stoi(arg));
		}
		catch(const std::exception& e)
		{
			std::cout << "int: impossible" << std::endl;
			return;
		}
	}
	else
	{
		std::cout << "int: impossible" << std::endl;
		return;
	}
	std::cout << "int: '" << i << "'" << std::endl;
}

void	handling_float(std::string arg)
{
	float f;

	if (is_char(arg))
	{
		f = static_cast<float>(arg[0]);
		std::cout << "float: '" << f << ".0f" << "'" << std::endl;
	}
	else if (is_int(arg))
	{
		f = static_cast<float>(stof(arg));
		std::cout << "float: '" << f << ".0f" << "'" << std::endl;
	}
	else if (is_float(arg))
	{
		try
		{
			f = static_cast<float>(stof(arg));
		}
		catch(const std::exception& e)
		{
			std::cout << "float: impossible" << std::endl;
			return;
		}	
		
		std::cout << "float: '" << f << "f" << "'" << std::endl;
	}
	else if (is_double(arg))
	{
		try
		{
			f = static_cast<float>(stof(arg));
		}
		catch(const std::exception& e)
		{
			std::cout << "float: impossible" << std::endl;
			return;
		}	
		
		std::cout << "float: '" << f << "f" << "'" << std::endl;
	}
	else
		std::cout << "float: impossible" << std::endl;
}

void	handling_double(std::string arg)
{
	double d;

	if (is_char(arg))
	{
		d = static_cast<double>(arg[0]);
		std::cout << "double: '" << d  << ".0" << "'" << std::endl;
	}
	else if (is_int(arg))
	{
		d = static_cast<double>(stod(arg));
		std::cout << "double: '" << d  << ".0" << "'" << std::endl;
	}
	else if (is_float(arg))
	{
		d = static_cast<float>(stof(arg));
		std::cout << "double: '" << d << "'" << std::endl;
	}
	else if (is_double(arg))
	{
		try
		{
			d = static_cast<double>(stod(arg));
		}
		catch(const std::exception& e)
		{
			std::cout << "double: impossible" << std::endl;
			return;
		}	
		std::cout << "double: '" << d << "'" << std::endl;
	}
	else
	{
		std::cout << "double: impossible" << std::endl;
		return;
	}
	
}

int main(int argc, char **argv)
{
    if (argc != 2)
        std::cout << "Nb of args invalid!!" << std::endl;
    else
    {
		std::string arg = argv[1];
		if (is_special_double(arg) || is_special_float(arg))
			handling_special_float_double(arg);
		else
		{
			handling_char(arg);
			handling_int(arg);
			handling_float(arg);
			handling_double(arg);
		}
    }
	return (0);
}