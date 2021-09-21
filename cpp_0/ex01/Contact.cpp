/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:05:50 by yer-raki          #+#    #+#             */
/*   Updated: 2021/09/21 17:10:57 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"

Contact::Contact(void)
{
	// std::cout << "Constractor Called" << std::endl;

	return ;
}

Contact::~Contact(void)
{
	// std::cout << "Destructor Called" << std::endl;
	return ;
}

std::string Contact::getFName(void) const
{
	return (this->_f_name);
}

std::string Contact::getLName(void) const
{
	return (this->_l_name);
}

std::string Contact::getNName(void) const
{
	return (this->_n_name);
}

std::string Contact::getPNb(void) const
{
	return (this->_p_nb);
}

std::string Contact::getDS(void) const
{
	return (this->_ds);
}

void	Contact::setFName(std::string f_n)
{
	this->_f_name = f_n;
	return ;
}

void	Contact::setLName(std::string l_n)
{
	this->_l_name = l_n;
	return ;
}

void	Contact::setNName(std::string n_n)
{
	this->_n_name= n_n;
	return ;
}

void	Contact::setPNb(std::string p_n)
{
	this->_p_nb = p_n;
	return ;
}

void	Contact::setDS(std::string d_s)
{
	this->_ds = d_s;
	return ;
}