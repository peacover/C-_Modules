/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 10:11:44 by yer-raki          #+#    #+#             */
/*   Updated: 2021/12/17 14:17:27 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    
}

Bureaucrat::Bureaucrat(int grade)
{
    try
    {
        if (grade > 150)
            throw GradeTooLowException();
        else if (grade < 1)
            throw GradeTooHighException();
        else
            _grade = grade;
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    
}

Bureaucrat::~Bureaucrat()
{
    
}
