/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:50:39 by yer-raki          #+#    #+#             */
/*   Updated: 2022/01/03 17:19:05 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <stdlib.h>

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", target , 72, 45)
{
    
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    srand((unsigned int)time(NULL));
    if(executor.getGrade() > getExecGrade())
        throw GradeTooLowException();
    if (!getIsSigned())
        throw FormNotSignedException();
    else
    {
        if (rand() % 2 == 1)
			std::cout << getTarget() << " has been robotomized successfully!\n";
		else
			std::cout << "It's a failure!!!" << std::endl;
    }
}