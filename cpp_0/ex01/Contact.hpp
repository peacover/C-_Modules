/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 08:28:13 by yer-raki          #+#    #+#             */
/*   Updated: 2021/09/21 16:54:21 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

class Contact{

public : 
	Contact(void);
	~Contact(void);
	
	std::string getFName(void) const;
	std::string getLName(void) const;
	std::string getNName(void) const;
	std::string getPNb(void) const;
	std::string getDS(void) const;

	void setFName(std::string f_n);
	void setLName(std::string l_n);
	void setNName(std::string n_n);
	void setPNb(std::string p_n);
	void setDS(std::string d_s);
	
private : 

	std::string	_f_name; // first name
	std::string	_l_name; // last name
	std::string	_n_name; // nickname
	std::string	_p_nb; //phone number
	std::string _ds; //dark secret
		
};

#endif