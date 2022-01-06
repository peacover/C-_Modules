/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:50:35 by yer-raki          #+#    #+#             */
/*   Updated: 2022/01/03 17:21:59 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <string>
#include <fstream>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    public : 
        PresidentialPardonForm(std::string target);
        ~PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm & src);
        PresidentialPardonForm    &operator=(const PresidentialPardonForm &rhs);
        
        void execute(Bureaucrat const & executor) const;
    private:

};
std::ostream &	operator<<(std::ostream & o, Form const & rhs);
#endif