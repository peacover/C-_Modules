/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 17:36:28 by yer-raki          #+#    #+#             */
/*   Updated: 2022/01/04 16:39:29 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include <fstream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
    public : 
        Intern();
        ~Intern();
        Intern(const Intern & src);
        // Intern    &operator=(const Intern &rhs);
        
        Form *create_R_form(std::string target);
        Form *create_S_form(std::string target);
        Form *create_P_form(std::string target);
        
        Form *makeForm(std::string name_form, std::string target);

        class InternNotFoundException : public std::exception
        {
            public:
                const char* what() const throw()
                {
                    return ("Intern::FormNotFoundException.");
                }
};
    private:

};

#endif