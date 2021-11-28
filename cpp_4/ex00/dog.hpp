/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 14:53:31 by yer-raki          #+#    #+#             */
/*   Updated: 2021/11/11 11:03:01 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "animal.hpp"

class Dog : public Animal
{
	public:

		Dog();
		Dog(Dog const & src);
		virtual ~Dog();
		Dog	& operator=( Dog const & rhs );

		virtual void makeSound() const;
};

#endif