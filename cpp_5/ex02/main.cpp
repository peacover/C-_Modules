/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:19:14 by yer-raki          #+#    #+#             */
/*   Updated: 2022/01/06 09:26:58 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	Form* shrubberyForm = new ShrubberyCreationForm("Shrub");
	Form* robotomyForm = new RobotomyRequestForm("Robot");
	Form* presidentialPardonForm = new PresidentialPardonForm("president");
	Bureaucrat	bureaucrat1("bureau", 1);
	try
	{
		shrubberyForm->beSigned(bureaucrat1);
		robotomyForm->beSigned(bureaucrat1);
		presidentialPardonForm->beSigned(bureaucrat1);
		bureaucrat1.executeForm(*shrubberyForm);
		bureaucrat1.executeForm(*robotomyForm);
		bureaucrat1.executeForm(*presidentialPardonForm);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "--------------------------------------------" << std::endl;
	std::cout << bureaucrat1 << std::endl;
	std::cout << *shrubberyForm << std::endl;
	std::cout << *robotomyForm << std::endl;
	std::cout << *presidentialPardonForm << std::endl;
	return 0;
}