/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:02:39 by yer-raki          #+#    #+#             */
/*   Updated: 2021/11/28 07:26:12 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"
#include <iostream>
#include <string>

class PhoneBook{

public : 

	PhoneBook(void);
	~PhoneBook(void);
	
	int		getIndex(void) const;
	void	setIndex(int i);
	Contact getContact(int index) const;
	void	setContact(Contact c, int index);
	
	void	add_contact(void);
	void	redim_contact(void);
	void	search_contact(void);
	
private : 

	int i;
	Contact contact[8];
};

#endif