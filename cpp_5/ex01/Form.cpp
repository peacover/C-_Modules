/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 10:08:00 by yer-raki          #+#    #+#             */
/*   Updated: 2022/01/03 12:28:03 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _sign_grade(0), _exec_grade(0)
{
    
}

Form::Form(std::string name, int sign_grade, int exec_grade) : _name(name), _sign_grade(sign_grade), _exec_grade(exec_grade)
{
    _is_signed = false;
    if (_sign_grade > 150)
        throw GradeTooLowException();
    else if (_sign_grade < 1)
        throw GradeTooHighException();
}

Form::~Form()
{
    
}

Form::Form(const Form & src) : _name(src._name), _is_signed(src._is_signed), _sign_grade(src._sign_grade), _exec_grade(src._exec_grade)
{
    // *this = src;
}

Form & Form::operator=(Form const &rhs)
{
    if (this != &rhs)
    {
        _name = rhs._name;
        _is_signed = rhs._is_signed;
    }
    return (*this);
}

void    Form::beSigned(Bureaucrat &b)
{
    if (b.getGrade() > _sign_grade)
    {
        _is_signed = false;
        b.signForm(*this);
        throw GradeTooLowException();
    }
    _is_signed = true;
    b.signForm(*this);
}

std::string Form::getName() const
{
    return (_name);   
}

bool Form::getIsSigned() const
{
    return (_is_signed);
}

int Form::getSignGrade() const
{
    return (_sign_grade);
}

int Form::getExecGrade() const
{
    return (_exec_grade);
}

std::ostream &	operator<<(std::ostream & o, Form const & rhs)
{
    o << rhs.getName() << " " << rhs.getIsSigned() << " " << rhs.getSignGrade() << " " << rhs.getExecGrade() << std::endl;
    return (o);
}