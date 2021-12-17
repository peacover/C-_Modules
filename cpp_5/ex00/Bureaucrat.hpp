/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 09:43:30 by yer-raki          #+#    #+#             */
/*   Updated: 2021/12/17 14:15:48 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat
{
    public:
        Bureaucrat(int grade);

        std::string getName() const;
        std::string getGrade() const;
        void        increment_grade();
        void        decrement_grade();
        
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Bureaucrat::GradeTooLowException.");
                }
        };
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Bureaucrat::GradeTooHighException.");
                }
        };
        
    private:
        std::string _name;
        int         _grade;
        Bureaucrat();
};

#endif