/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 17:36:23 by yer-raki          #+#    #+#             */
/*   Updated: 2022/01/04 16:25:06 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    
}

Intern::~Intern()
{
    
}

Intern::Intern(const Intern & src)
{
   *this = src;
}

Form *Intern::create_R_form(std::string target)
{
    RobotomyRequestForm *r = new RobotomyRequestForm(target);
    return(r);
}

Form *Intern::create_P_form(std::string target)
{
    PresidentialPardonForm *p = new PresidentialPardonForm(target);
    return(p);
}

Form *Intern::create_S_form(std::string target)
{
    ShrubberyCreationForm *s = new ShrubberyCreationForm(target);
    return(s);
}


Form *Intern::makeForm(std::string name_form, std::string target)
{
    std::string	tmp[] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	Form *(Intern::*f[])(std::string) = {&Intern::create_P_form, &Intern::create_R_form, &Intern::create_S_form};
    
	for (int i = 0; i < 3; i++)
	{
		if (tmp[i] == name_form)
		{
            std::cout << "Intern creates " << name_form << std::endl;
            return (this->*f[i])(target);
		}
	}
    throw InternNotFoundException();
}