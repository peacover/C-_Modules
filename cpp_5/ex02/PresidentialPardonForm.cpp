/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:50:32 by yer-raki          #+#    #+#             */
/*   Updated: 2022/01/03 17:23:53 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <stdlib.h>

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", target , 25, 5)
{
    
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if(executor.getGrade() > getExecGrade())
        throw GradeTooLowException();
    if (!getIsSigned())
        throw FormNotSignedException();
    else
    {
		std::cout << getTarget() << " has been ardoned by Zafod Beeblebrox.\n";
    }
}