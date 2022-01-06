/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 09:35:50 by yer-raki          #+#    #+#             */
/*   Updated: 2022/01/03 12:27:15 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
    public:
        Form(std::string name, int sign_grade, int exec_grade);
        ~Form();
        Form(Form const &src);
        Form    &operator=(const Form &rhs);
        void    beSigned(Bureaucrat &b);

        std::string getName() const; 
        bool        getIsSigned() const; 
        int         getSignGrade() const; 
        int         getExecGrade() const; 
        
        class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw()
                {
                    return ("Form::GradeTooLowException.");
                }
        };
        class GradeTooHighException : public std::exception
        {
            public:
                const char* what() const throw()
                {
                    return ("Form::GradeTooHighException.");
                }
        };
    private:
        std::string _name;
        bool        _is_signed;
        const int   _sign_grade;
        const int   _exec_grade;
        Form();
};

std::ostream &	operator<<(std::ostream & o, Form const & rhs);

#endif