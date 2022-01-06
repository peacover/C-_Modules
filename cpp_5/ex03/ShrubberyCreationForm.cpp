/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:50:48 by yer-raki          #+#    #+#             */
/*   Updated: 2022/01/03 16:58:08 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", target , 145, 137)
{
    
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if(executor.getGrade() > getExecGrade())
        throw GradeTooLowException();
    if (!getIsSigned())
        throw FormNotSignedException();
    else
    {
        std::ofstream o(this->getTarget() + "_shrubbery");
        o <<  "                                     .         ;      " << std::endl;        
        o <<  "        .              .              ;%     ;;       " << std::endl;            
        o <<  "          ,           ,                :;%  %;        " << std::endl;           
        o <<  "           :         ;                   :;%;'     ., " << std::endl;            
        o <<  "  ,.        %;     %;            ;        %;'    ,;   " << std::endl;         
        o <<  "    ;       ;%;  %%;        ,     %;    ;%;    ,%'    " << std::endl;           
        o <<  "     %;       %;%;      ,  ;       %;  ;%;   ,%;'     " << std::endl;           
        o <<  "      ;%;      %;        ;%;        % ;%;  ,%;'       " << std::endl;      
        o <<  "       `%;.     ;%;     %;'         `;%%;.%;'         " << std::endl;              
        o <<  "        `:;%.    ;%%. %@;        %; ;@%;%'            " << std::endl;              
        o <<  "           `:%;.  :;bd%;          %;@%;'              " << std::endl;             
        o <<  "             `@%:.  :;%.         ;@@%;'               " << std::endl;             
        o <<  "               `@%.  `;@%.      ;@@%;                 " << std::endl;             
        o <<  "                 `@%%. `@%%    ;@@%;                  " << std::endl;           
        o <<  "                   ;@%. :@%%  %@@%;                   " << std::endl;        
        o <<  "                     %@bd%%%bd%%:;                    " << std::endl;           
        o <<  "                       #@%%%%%:;;                     " << std::endl;            
        o <<  "                       %@@%%%::;                      " << std::endl;          
        o <<  "                       %@@@%(o);  . '                 " << std::endl;                    
        o <<  "                       %@@@o%;:(.,'                   " << std::endl;                    
        o <<  "                   `.. %@@@o%::;                      " << std::endl;               
        o <<  "                      `)@@@o%::;                      " << std::endl;              
        o <<  "                       %@@(o)::;                      " << std::endl;                
        o <<  "                      .%@@@@%::;                      " << std::endl;                
        o <<  "                      ;%@@@@%::;.                     " << std::endl;            
        o <<  "                     ;%@@@@%%:;;;.                    " << std::endl;               
        o <<  "                 ...;%@@@@@%%:;;;;,..                 " << std::endl;
    }
}