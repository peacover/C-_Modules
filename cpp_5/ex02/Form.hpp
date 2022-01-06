/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 09:35:50 by yer-raki          #+#    #+#             */
/*   Updated: 2022/01/03 13:43:54 by yer-raki         ###   ########.fr       */
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
        Form(std::string name, std::string target, int sign_grade, int exec_grade);
        virtual ~Form();
        Form(Form const &src);
        Form    &operator=(const Form &rhs);
        void    beSigned(Bureaucrat &b);

        std::string getName() const;
        std::string getTarget() const;
        bool        getIsSigned() const;
        int         getSignGrade() const;
        int         getExecGrade() const;

        virtual void execute(Bureaucrat const & executor) const = 0;
        
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
        class FormNotSignedException : public std::exception
        {
            public:
                const char* what() const throw()
                {
                    return ("Form::FormNotSignedException.");
                }
        };
    private:
        std::string _name;
        std::string _target;
        bool        _is_signed;
        const int   _sign_grade;
        const int   _exec_grade;
        Form();
};

std::ostream &	operator<<(std::ostream & o, Form const & rhs);

#endif