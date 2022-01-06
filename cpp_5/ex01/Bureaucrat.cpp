/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 10:11:44 by yer-raki          #+#    #+#             */
/*   Updated: 2022/01/03 12:29:24 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{

}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
    if (grade > 150)
        throw GradeTooLowException();
    else if (grade < 1)
        throw GradeTooHighException();
    else
    {
        _grade = grade;
        _name = name;
    }
}

Bureaucrat::Bureaucrat(Bureaucrat const & rhs)
{
    *this = rhs;
}


Bureaucrat::~Bureaucrat()
{
    
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const &rhs)
{
    if (this != &rhs)
    {
        this->_grade = getGrade();
        this->_name = getName();
    }
    return (*this);
}

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & rhs)
{
    o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
    return (o);
}

std::string Bureaucrat::getName() const
{
    return (this->_name);
}

int       Bureaucrat::getGrade() const
{
    return (this->_grade);
}

void        Bureaucrat::increment_grade()
{

    if (_grade - 1 < 1)
        throw GradeTooHighException();
    else
        _grade--;

}

void        Bureaucrat::decrement_grade()
{
    if (_grade + 1 > 150)
        throw GradeTooLowException();
    else
        _grade++;
}

void	Bureaucrat::signForm(Form const & f)
{
    if (f.getIsSigned() == true)
    {
        std::cout << this->_name << " signs " << f.getName() << std::endl;
    }
    else
        std::cout << this->_name << " cannot sign " << f.getName()  << " because Grade is too low" << std::endl;
}