/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:50:44 by yer-raki          #+#    #+#             */
/*   Updated: 2022/01/03 17:00:15 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string>
#include <fstream>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
    public : 
        RobotomyRequestForm(std::string target);
        ~RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm & src);
        RobotomyRequestForm    &operator=(const RobotomyRequestForm &rhs);
        
        void execute(Bureaucrat const & executor) const;
    private:

};
std::ostream &	operator<<(std::ostream & o, Form const & rhs);
#endif