/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:19:14 by yer-raki          #+#    #+#             */
/*   Updated: 2022/01/06 09:25:37 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    try
    {
        Bureaucrat	bureaucrat1("Bureaucrat1", 5);
        Bureaucrat	bureaucrat2("Bureaucrat2", 140);
        Form		form1("form1", 130, 2);
        Form		form2("form2", 1, 8);
        
        
        form1.beSigned(bureaucrat1);
        
        // form2.beSigned(bureaucrat2);
        
        std::cout << "-------------------------------" << std::endl;
        std::cout << bureaucrat1 << std::endl;
        std::cout << bureaucrat2 << std::endl;
        std::cout << form1 << std::endl;
        std::cout << form2 << std::endl;
    }
    catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	return 0;
}