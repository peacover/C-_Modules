/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:19:14 by yer-raki          #+#    #+#             */
/*   Updated: 2022/01/04 16:42:22 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	Intern	randomIntern;
	Form* shrubberyForm;
	Form* robotomyForm;
	Form* presidentialPardonForm;
	Bureaucrat	bureaucrat1("admin", 1);

	try
	{
		shrubberyForm = randomIntern.makeForm("robotomy request", "shrubbery");
		robotomyForm = randomIntern.makeForm("shrubbery creation", "robot");
		presidentialPardonForm = randomIntern.makeForm("presidential pardon", "president");
		std::cout << "--------------------------------------------" << std::endl;
		shrubberyForm->beSigned(bureaucrat1);
		robotomyForm->beSigned(bureaucrat1);
		presidentialPardonForm->beSigned(bureaucrat1);
		std::cout << "--------------------------------------------" << std::endl;
		bureaucrat1.executeForm(*shrubberyForm);
		std::cout << "--------------------------------------------" << std::endl;
		bureaucrat1.executeForm(*robotomyForm);
		std::cout << "--------------------------------------------" << std::endl;
		bureaucrat1.executeForm(*presidentialPardonForm);
		std::cout << "--------------------------------------------" << std::endl;
		std::cout << bureaucrat1 << std::endl;
		std::cout << *shrubberyForm << std::endl;
		std::cout << *robotomyForm << std::endl;
		std::cout << *presidentialPardonForm << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}
