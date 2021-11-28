/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:05:50 by yer-raki          #+#    #+#             */
/*   Updated: 2021/11/28 07:50:52 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	// std::cout << "Contact Constractor Called" << std::endl;
}

Contact::~Contact(void)
{
	// std::cout << "Contact Destructor Called" << std::endl;
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
}

void	Contact::setLName(std::string l_n)
{
	this->_l_name = l_n;
}

void	Contact::setNName(std::string n_n)
{
	this->_n_name= n_n;
}

void	Contact::setPNb(std::string p_n)
{
	this->_p_nb = p_n;
}

void	Contact::setDS(std::string d_s)
{
	this->_ds = d_s;
}